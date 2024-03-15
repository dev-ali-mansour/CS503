#include <iostream>

using namespace std;

int main() {
    // Relational operators
    /*
     >  Greater than
     <  Less than
     >= Greater than or equal
     <= Less than or equal
     == Is equal
     != Not equal
      */

    int num1, num2;
    cout << "Enter two integer numbers: ";
    cin >> num1 >> num2;
    bool isValid = num1 > num2;

    cout << "result: " << isValid;

    return 0;
}