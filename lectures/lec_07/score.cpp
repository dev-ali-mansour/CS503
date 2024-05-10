#include <iostream>

using namespace std;

void getScore(int &score);

void printGrade(int cScore);

int main() {
    int courseScore;
    getScore(courseScore);
    printGrade(courseScore);
    return 0;
}

void getScore(int &score) {
    cout << "Enter course score: ";
    cin >> score;
    cout << "\n The course score is" << score << endl;
}

void printGrade(int cScore) {
    cout << "Your grade for the course is ";
    if (cScore >= 90) cout << "A." << endl;
    else if (cScore >= 80) cout << "B." << endl;
    else if (cScore >= 70) cout << "C." << endl;
    else if (cScore >= 60) cout << "D." << endl;
    else cout << "F." << endl;
}