/*
Write the definition of a void function that takes as input two decimal
numbers. If the first number is nonzero, it outputs second number
        divided by the first number; otherwise, it outputs a message
indicating that the second number cannot be divided by the first no.
cause the first number is 0
*/

#include <iostream>

using namespace std;

void print(double x, double y) {
    if (y != 0) {
        double result = x / y;
        cout << "The result = " << result << endl;
    } else cout << "The second number can not be divided by the first number. The first number is 0" << endl;
}

int main() {
    print(12.5, 5);
    print(5, 75);
    print(10, 0);
    return 0;
}