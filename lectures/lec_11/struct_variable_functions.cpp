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

void readIn(studentType &student) { //by reference
    int score;
    cin >> student.firstName >> student.lastName;
    cin >> student.testScore >> student.programmingScore;
    cin >> student.GPA;
    score = (student.testScore + student.programmingScore) / 2;
    if (score >= 90) student.courseGrade = 'A'; //try switch?
    else if (score >= 80) student.courseGrade = 'B';
    else if (score >= 70) student.courseGrade = 'C';
    else if (score >= 60) student.courseGrade = 'D';
    else student.courseGrade = 'F';
}

void printStudent(studentType student) //no need to call by reference
{
    cout << student.firstName << " " << student.lastName << " " <<
         student.courseGrade << " " << student.testScore << " " <<
         student.programmingScore << " " << student.GPA << endl;
}

int main() {
    studentType newStudent;
    readIn(newStudent); //call the function readIn
    printStudent(newStudent);

    return 0;
}