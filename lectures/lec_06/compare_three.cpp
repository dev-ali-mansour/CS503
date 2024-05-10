#include <iostream>

using namespace std;

double larger(double x, double y) {
    if (x > y) return x;
    return y;
}

double compareThree(double x, double y, double z) {
    return larger(x, larger(y, z));
}

int main() {
    int num1, num2, num3;
    cout << "Enter three integer numbers:";
    cin >> num1 >> num2 >> num3;
    cout << "The largest number of " << num1 << ", " << num2 << ", and " << num3 << " is "
         << compareThree(num1, num2, num3) << endl;
    return 0;
}