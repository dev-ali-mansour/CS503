#include <iostream>

using namespace std;

int main() {
    bool legalAge; int age;
    cout << "Enter your age: ";
    cin >> age;
    legalAge = true;
    /*
     Assign the value true to legalAge if the value of age is greater than or equal to 21.
     Assign the value false to legalAge if the value of age is less than 21
     */
    legalAge = (age >= 21);
    cout << "The value of legalAge is: " << legalAge << endl;


    return 0;
}