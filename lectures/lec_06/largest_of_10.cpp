#include <iostream>

using namespace std;

double larger(double x, double y);

int main() {
    double num, max;
    cout << "Enter 10 numbers." << endl;
    cin >> num;
    max = num;
    for (int count = 1; count < 10; count++) // starts at 1 rather than 0
    {
        cin >> num;
        max = larger(max, num);
    }
    cout << "The largest number is " << max << endl;
    return 0;
} //end main
double larger(double x, double y) {
    if (x >= y) return x;
    else return y;
}