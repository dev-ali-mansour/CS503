#include <iostream>

using namespace std;

int main() {
    /*
     Logical Operators
     && And
     || Or
     ! Not
      */

    int num1, num2, num3;
    cout << "Enter three integer numbers: ";
    cin >> num1 >> num2 >> num3;
    bool isValid = (num1 > num2) && (num2 >= num3);

    cout << "result: " << isValid << endl;

    string userName, password;
    cout << "Enter your username: ";
    cin >> userName;
    cout << "Enter your password: ";
    cin >> password;
    isValid = userName == "user" && password == "123456";
    cout << "is valid user: " << isValid;

    return 0;
}