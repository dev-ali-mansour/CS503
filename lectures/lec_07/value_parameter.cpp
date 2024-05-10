#include <iostream>

using namespace std;

void funcValueParam(int num); //function prototype
int main() {
    int number = 6;
    funcValueParam(number);
    cout << "After calling the function funcValueParam, number = " << number << endl;
//int a=number +100; cout<<"its value in an expression +100 is "<< a<<endl; //106
    return 0;
}

void funcValueParam(int num) {
    cout << "In the function funcValueParam,before changing,num= " << num << endl;
    num = 15;
    cout << "In the function funcValueParam, after changing, num = " << num << endl;
}