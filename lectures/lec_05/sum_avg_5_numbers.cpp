#include <iostream>

using namespace std;

int main() {
    int i, newNum, sum = 0; //must be initialized before the loop
    double average;
    cout << "please enter 5 numbers" << endl;
    for (i = 1; i <= 5; i++) {
        cin >> newNum;
        sum = sum + newNum;
    }
    average = sum / 5; //must be out of the loop!!!
    cout << "The sum is " << sum << endl << "The average is " << average << endl;
    return 0;
}