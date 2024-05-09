#include <iostream>

using namespace std;

int main() {
    int temperature = 0;
    cout << "Enter temperature" << endl;
    cin >> temperature;
    if (temperature >= 70)
        if (temperature >= 80)
            cout << "Good day for swimming." << endl;
        else
            cout << "Good day for golfing." << endl;

    return 0;
}