#include <iostream>

using namespace std;

int main() {
    double score = 0.0;
    long numberOfPassingStudents = 0;
    cout << "Enter your mark in C++ " << endl;
    cin >> score;

    if (score >= 60) {
        cout << "Passing" << endl;
        numberOfPassingStudents++;
        cout << "Number of passing students: " << numberOfPassingStudents;
    } else cout << "Sorry u did not pass this course" << endl;

    return 0;
}