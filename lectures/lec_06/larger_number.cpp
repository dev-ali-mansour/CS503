#include <iostream>

using namespace std;

double larger(double x, double y) {
    if (x > y) return x;
    return y;
}

int main() {
    double one = 13.00; //or receive it from the user
    double two = 36.53;
    double maxNum;
    cout << "The larger of 5 and 6 is " << larger(5, 6) << endl;
    cout << "The larger of " << one << " and " << two << " is " << larger(one, two) << endl;
    cout << "The larger of " << one << " and 29 is " << larger(one, 29) << endl;
    maxNum = larger(38.45, 56.78);
}