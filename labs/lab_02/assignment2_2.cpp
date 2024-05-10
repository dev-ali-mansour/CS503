/*
Write a program that ask the user to enter the item number and prints the price
 of this item according to the following :
No 1 price 100,
NO 2 price 200,
No 3 price 300,
No 4 price 400
 */
#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Please enter item number:";
    cin >> number;
    if (number == 1)cout << 100;
    else if (number == 2)cout << 200;
    else if (number == 3)cout << 300;
    else if (number == 4)cout << 400;
    else cout << "Invalid item number!";
    cout << endl;

    return 0;
}