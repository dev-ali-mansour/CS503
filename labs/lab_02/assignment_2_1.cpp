/*
 Write a C++ program that asks the user to enter three numbers and
 print the maximum and the minimum
 */
#include <iostream>

using namespace std;

int main() {
    //Todo Create Enhanced Version Of It Using Functions
    int num1 = 0, num2 = 0, num3 = 0, max = 0, min = 0;
    bool isEqual = true;
    cout << "Enter three integer numbers:";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3) {
        max = num1;
        if (num2 > num3) min = num3;
        else min = num2;
        isEqual = false;
    } else if (num2 > num1 && num2 > num3) {
        max = num2;
        if (num1 > num3)min = num3;
        else min = num1;
        isEqual = false;
    } else if (num3 > num1 && num3 > num2) {
        max = num3;
        if (num1 > num2)min = num2;
        else min = num1;
        isEqual = false;
    } else cout << "Three numbers are equal!" << endl;

    if (!isEqual) cout << "Minimum number: " << min << ", Maximum number: " << max << endl;

    return 0;
}