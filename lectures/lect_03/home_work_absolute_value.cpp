#include <iostream>

using namespace std;

int main() {
    long number, abs;
    cout << "Enter an integer number: ";
    cin >> number;
    abs = number;

    if (number < 0)
        abs *= -1;

    cout << "The absolute value of " << number << " is " << abs << endl;

    return 0;
}