#include <iostream>

using namespace std;

int main() {
    int month = 0;
    cout << "Enter month number:";
    cin >> month;

    if (month == 1) cout << "January" << endl;
    else if (month == 2) cout << "February" << endl;
    else if (month == 3) cout << "March" << endl;
    else if (month == 4) cout << "April" << endl;
    else if (month == 5) cout << "May" << endl;
    else if (month == 6) cout << "June" << endl;

    // Comparing if...else Statements with a Series of if Statements

    /*
        if (month == 1) cout << "January" << endl;
        if (month == 2) cout << "February" << endl;
        if (month == 3) cout << "March" << endl;
        if (month == 4) cout << "April" << endl;
        if (month == 5) cout << "May" << endl;
        if (month == 6) cout << "June" << endl;
     */

    return 0;
}