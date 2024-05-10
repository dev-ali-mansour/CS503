#include <iostream>

using namespace std;

double larger(double x, double y); //function prototype
double compareThree(double x, double y, double z); //function prototype
int main() {
    double one, two;
    cout << "The larger of 5 and 10 is " << larger(5, 10) << endl;
    cout << "Enter two numbers: ";
    cin >> one >> two;
    cout << " \n The larger of " << one << "and" << two << "is" << larger(one, two) << endl;
    cout << "Thelargest of43.48,34.00,and12.65is " << compareThree(43.48, 34.00, 12.65);
    return 0;
}

double larger(double x, double y) {
    double max;
    if (x >= y) max = x;
    else max = y;
    return max;
}

double compareThree(double x, double y, double z) { return larger(x, larger(y, z)); }