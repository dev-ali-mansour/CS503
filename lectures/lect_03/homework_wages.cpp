#include <iostream>

using namespace std;
const double RATE = 12.5;
// We have changed the RATE data type to double and update it's value to 12.5

int main() {
    double hours = 0.0, wages = 0.0;
    cout << "Please enter the number of hours you worked" << endl;
    cin >> hours;
    if (hours > 40)
        wages = 40 * RATE + 1.5 * RATE * (hours - 40);
    else
        wages = hours * RATE;

    cout << "Your wages is " << wages << endl;

    return 0;
}