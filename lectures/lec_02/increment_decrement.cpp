#include <iostream>

using namespace std;

int main() {
    /*
     Pre-increment:     ++count     first increments the value of count by 1, and then use the new value of count in the expression
     Post-increment:    count++    first use the current value of count , and then increments the value of count by 1
     Pre-decrement:     --count     first decrements the value of count by 1, and then use the new value of count in the expression
     Post-decrement:    count--    first use the current value of count , and then decrements the value of count by 1
     */

    int x = 5;
    int y = ++x;
    cout << "the value of y is: " << y << endl;
    cout << "the new value of x is: " << x << endl;

    int c = 5;
    int d = c++;
    cout << "the value of d is: " << d << endl;
    cout << "the new value of c is: " << c << endl;
    return 0;
}