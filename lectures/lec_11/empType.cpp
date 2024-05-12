#include <iostream>

using namespace std;
struct empType {
    int sal;
    double expyears;
} emp;

void initialize(empType &e); //function prototype
int main() { //empType s;
    initialize(emp); //function call
    cout << emp.sal << endl << emp.expyears << endl;
    return 0;
}

void initialize(empType &e) {
    e.sal = 0.0;
    e.expyears = 3;
}