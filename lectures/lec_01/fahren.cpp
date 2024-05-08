#include <iostream>

using namespace std;

int main() {
    int ftemp;                  //for temperature in fahrenheit
    cout << "Enter temperature in fahrenheit: ";
    cin >> ftemp;
    int ctemp;
    ctemp = (ftemp - 32) * 5 / 9;
    cout << "Equivalent in Celsius: " << ctemp << "\n";
    return 0;
}