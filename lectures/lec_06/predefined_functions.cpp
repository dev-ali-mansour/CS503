#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    double u, v; u = 4.2; v = 3.0;
    cout << u << " to the power of "<< v << " = " << pow(u, v) << endl;
    cout << "2.0 to the power of 4 = "<< pow(2.0, 4.0) << endl;
//u can use the function many times in the program using different data each time
    u = u + pow(3.0, 2.5);
    cout << "u = " << u << endl;
    x = -15;
    cout << " The absolute value of " << x<< " = " << abs(x) << endl;
    return 0;
}