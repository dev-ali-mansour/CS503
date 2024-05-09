#include <iostream>

using namespace std;

int main() {
    int x = 0, drivingCode = 0;
    cout << "Enter an integer number:";
    cin >> x;
    if (x = 5) cout << "The value is five." << endl;
    /*
     Because 5 is nonzero, the expression in the if statement evaluates to true, so the
    statement part of the if statement will always execute!
     */

    cout << "Enter driving code:";
    cin >> drivingCode;

    if (drivingCode == 1) cout << "The discount on the policy is 25%." << endl;

    return 0;
}