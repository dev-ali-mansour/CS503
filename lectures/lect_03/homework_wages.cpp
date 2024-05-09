#include <iostream>

using namespace std;
// We have changed the RATE data type to double and update it's value to 12.5

int main() {
    double rate = 0.0, hours = 0.0, wages = 0.0;
    cout << "Enter working hours and rate: ";
    cin >> hours >> rate;
    if (hours > 40)
        wages = 40 * rate + 1.5 * rate * (hours - 40);
    else
        wages = hours * rate;

    cout << "Your wages is $" << wages << endl;

    return 0;
}