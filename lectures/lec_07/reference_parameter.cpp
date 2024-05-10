#include <iostream>

using namespace std;

void funcRefParam(int &num);

int main() {
    int number = 6;
    funcRefParam(number);
    cout << "After calling the function, funcRefParam, number = " << number << endl;
//int a=number +100; cout<<"its value in an expression +100 is "<<a<<endl; //115
    return 0;
}

void funcRefParam(int &num) {
    cout << "In the function funcRefParam,before changing,num=" << num << endl;
    num = 15;
    cout << "In the function funcRefParam, after changing, num =" << num << endl;
}