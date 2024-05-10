#include <iostream>

using namespace std;

int sum(int a, int b) { return a + b; }

int sum(int a, int b, int c) { return a + b + c; }

int main() {
    cout << " The sum of 2 numbers is: " << sum(10, 20) << endl;
    cout << " The sum of 3 numbers is: " << sum(10, 20, 29) << endl;
    return 0;
}