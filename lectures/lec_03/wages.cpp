#include <iostream>

using namespace std;
const int RATE = 50;

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