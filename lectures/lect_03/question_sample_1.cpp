#include <iostream>

using namespace std;

int main() {
    long number = 0.0;

    cout << "Please enter an integer number" << endl;
    cin >> number;
    if (number % 2 == 0)
        cout << "This is an even number";

    return 0;
}