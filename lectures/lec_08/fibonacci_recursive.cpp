#include <iostream> // The Fibonacci program

using namespace std;

int rFibNum(int a, int b, int n); //function prototype
int main() {
    int firstFibNum;
    int secondFibNum;
    int nth;
    cout << "Enter the first Fibonacci number: ";
    cin >> firstFibNum;
    cout << " \n Enter the second Fibonacci number: ";
    cin >> secondFibNum;
    cout << " \n Enter the position of the desired Fibonacci number: ";
    cin >> nth;
    cout << "\n The Fibonacci number at position" << nth << " is:" << rFibNum(firstFibNum, secondFibNum, nth);
    return 0;
}

int rFibNum(int a, int b, int n) {
    if (n == 1) return a;
    else if (n == 2) return b;
    else return rFibNum(a, b, n - 1) + rFibNum(a, b, n - 2);
}