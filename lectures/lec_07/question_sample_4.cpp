/*
Write the definition of a void function that takes as input two
parameters of type int, say sum and testScore. The function updates
the value of sum by adding the value of testScore. The new value of
sum is reflected in the calling environment.
*/

#include <iostream>

using namespace std;

void add(int &x, int y) {
    x += y;
}

int main() {
    int sum = 10, testScore = 5;

    cout << "Before add: Sum = " << sum << ", tesScore = " << testScore << endl;
    add(sum, testScore);
    cout << "After add: Sum = " << sum << ", tesScore = " << testScore << endl;

    return 0;
}