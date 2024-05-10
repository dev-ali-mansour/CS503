#include <iostream>

using namespace std;

void func1();

void func2();

int main() {
    int num;
    cout << "Enter 1 or 2: ";
    cin >> num;
    cout << " \n Take ";
    if (num == 1) func1();
    else if (num == 2) func2();
    else cout << "Invalid input. You must enter1or2 \n";
    return 0;
}

void func1() { cout << "Programming I." << endl; }

void func2() { cout << "Programming II." << endl; }