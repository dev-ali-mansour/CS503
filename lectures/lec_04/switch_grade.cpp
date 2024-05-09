#include <iostream>

using namespace std;

int main() {
    char grade;
    cout << "enter a character representing ur grade: " << endl;
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "The grade point is 4.0" << endl;
            break;
        case 'B':
            cout << "The grade point is 3.0" << endl;
            break;
        case 'C':
            cout << "The grade point is 2.0" << endl;
            break;
        case 'D':
            cout << "The grade point is 1.0" << endl;
            break;
        case 'F':
            cout << "The grade point is 0.0" << endl;
            break;
        default:
            cout << "The grade is invalid" << endl;
    }

    return 0;
}