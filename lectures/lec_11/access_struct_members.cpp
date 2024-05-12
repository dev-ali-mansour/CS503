#include <iostream>

using namespace std;

struct studentType {
    string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;
};

int main() {
    studentType newStudent;
    studentType student;

    newStudent.GPA = 0.0;
    newStudent.firstName = "Mohamed";
    newStudent.lastName = "Salah";

    cin >> newStudent.firstName;
    cin >> newStudent.testScore >> newStudent.programmingScore;

    int score = (newStudent.testScore + newStudent.programmingScore) / 2;

    if (score >= 90)
        newStudent.courseGrade = 'A';
    else if (score >= 80)
        newStudent.courseGrade = 'B';
    else if (score >= 70)
        newStudent.courseGrade = 'c';
    else if (score >= 60)
        newStudent.courseGrade = 'D';
    else
        newStudent.courseGrade = 'F';

    student = newStudent;
/*
    This is equivalent to the following statements:
    student.firstName = newStudent.firstName;
    student.lastName = newStudent.lastName;
    student.courseGrade = newStudent.courseGrade;
    student.testScore = newStudent.testScore;
    student.programmingScore = newStudent.programmingScore;
    student.GPA = newStudent.GPA;


    you cannot use relational operators on struct variables.
    if (student == newStudent) //illegal
*/

    cout << newStudent.firstName << " " << newStudent.lastName
         << " " << newStudent.courseGrade
         << " " << newStudent.testScore
         << " " << newStudent.programmingScore
         << " " << newStudent.GPA << endl;


    return 0;
}