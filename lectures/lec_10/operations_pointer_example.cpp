#include <iostream>

using namespace std;

int main() {
    int *p;
    int x, y = 5;
    p = &x;
    cout << "Value of p = " << p << endl;
    cout << "Address of x = " << &x << endl;
    p++;
    cout << "Value of p = " << p << endl;
    p = p + y;
    cout << "Value of p = " << p << endl;
    p++;
    cout << "Value of p = " << p << endl;
    return 0;
}