#include <iostream>

using namespace std;

int main() {
    int x = 0, y = 0, z = 0;
    cout << "Enter two integer numbers: ";
    cin >> y >> z;

    x == y + z;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    x = y + z;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}