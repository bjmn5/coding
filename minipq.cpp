#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];
    int total[5];
    double average[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        cin.getline(names[i], 20);

        cout << "Enter marks for M1, M2, M3: ";
        cin >> marks[i][0] >> marks[i][1] >> marks[i][2];
        cin.ignore();

        total[i] = marks[i][0] + marks[i][1] + marks[i][2];
        average[i] = total[i] / 3.0;
    }

    cout << "\n";
    cout <<left
         << setw(15)<< "Name"
         << setw(8) << "M1"
         << setw(8) << "M2"
         << setw(8) << "M3"
         << setw(8) << "Total"
         << setw(10)<< "averag" 
         << endl;

    for (int i = 0; i < 5; i++) {
        cout <<left
             << setw(15)<< names[i]
             << setw(8) << marks[i][0]
             << setw(8) << marks[i][1]
             << setw(8) << marks[i][2]
             << setw(7) << total[i]
             << setw(12)<< average[i] << endl;
    }
    int top = 0;

    for (int i = 1; i<5; i++) {
        if (average[i] > average[top]) {
            top = i;
        }
    }

    cout << "\nTop student: " << names[top] << endl;

    return 0;
}