#include <iostream>

using namespace std;

void print(int n); //prototype
int main() {
    print(20);
    return 0;
}

void print(int n) { for (int i = 1; i <= n; i++) cout << "/" << " "; }