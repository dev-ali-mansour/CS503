#include <iostream>

using namespace std;

int main() {
    int score = 0;
    char grade = 'U';

    cout << "Enter your score\n";
    cin >> score;

    switch (score / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            grade = 'F';
            break;
        case 6:
            grade = 'E';
            break;
        case 7:
            grade = 'C';
            break;
        case 8:
            grade = 'B';
            break;
        case 9:
            grade = 'A';
            break;
        default:
            cout << "Invalid test score." << endl;
    }

    if (grade != 'U')
        cout << "The grade is " << grade;

    return 0;
}