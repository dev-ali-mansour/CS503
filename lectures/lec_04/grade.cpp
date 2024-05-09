#include <iostream>

using namespace std;

int main() {
    int score = 0;
    cout << "Enter student score" << endl;
    cin >> score;

    if (score >= 95)cout << "The grade is A" << endl;
    else if (score >= 85)cout << "The grade is B" << endl;
    else if (score >= 75)cout << "The grade is C" << endl;
    else if (score >= 60)cout << "The grade is D" << endl;
    else cout << "The grade is F" << endl;

    return 0;
}