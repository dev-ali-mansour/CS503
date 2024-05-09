#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Enter an integer number: ";
    cin >> x;
    if (x > 100)
        cout << "This number is greater than 100\n";
    else if (x < 100)
        cout << "This number is less than 100\n";
    return 0;
}