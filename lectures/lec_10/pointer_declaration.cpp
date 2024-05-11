#include <iostream>
using namespace std;
int main() {
    int *p;
    int x = 37;
    cout << "x = " <<x<<endl;
    p = &x;
    cout<<"*p = "<<*p<<", x = "<<x<<endl;
    *p = 58;
    cout << "*p = " << *p << ", x = " << x << endl;
    cout << "Address of p = " << &p << endl;
    cout << "Value of p = " << p << endl;
    cout << "Value of the memory location pointed to by *p = " << *p << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Value of x = " << x << endl;
    return 0; }