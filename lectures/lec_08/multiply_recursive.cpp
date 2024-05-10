#include <iostream>

using namespace std;

int multiply(int m, int n); // prototype
int main() {
    cout << multiply(12, 2) << endl;
    return 0;
}

int multiply(int m, int n) {
    if (n == 0) return 0;
    else if (n == 1) return m;
    else return (m + multiply(m, n - 1));
}