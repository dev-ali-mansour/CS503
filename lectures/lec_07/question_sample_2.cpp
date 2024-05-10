/*
Write the definition of a void function that takes as input a decimal
number and outputs 3 times the value of the decimal number.
 */
#include <iostream>

using namespace std;

void print3Times(int x) {
    cout << 3 * x;
}

int main() {
    print3Times(5);
    return 0;
}