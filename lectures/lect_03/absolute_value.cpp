#include <iostream>

using namespace std;

int main() {
    long number;
    cout << "Enter an integer number: ";
    cin >> number;

    if (number < 0)
        number = -1 * number; // Could be written number*=-1;

    cout << "The absolute value is: " << number << endl;

    return 0;
}