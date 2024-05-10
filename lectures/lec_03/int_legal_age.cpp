#include <iostream>

using namespace std;

int main() {
    int legalAge, age;
    cout << "Enter your age: ";
    cin >> age;
    /*
        assigns the value 1 to legalAge if the value of age is greater than or equal to 21.
        The statement assigns the value 0 if the value of age is less than 21
    */
    legalAge = (age >= 21);
    cout << "The value of legalAge is: " << legalAge << endl;


    return 0;
}