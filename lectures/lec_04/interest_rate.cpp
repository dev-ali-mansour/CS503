#include <iostream>

using namespace std;

int main() {
    double balance = 0.0, interestRate = 0.0;
    cout << "Enter account balance" << endl;
    cin >> balance;

    if (balance > 50000.00)
        interestRate = 0.07;
    else if (balance >= 25000.00)
        interestRate = 0.05;
    else if (balance >= 1000)
        interestRate = 0.03;
    else
        interestRate = 0.0;

    cout << "Your account balance is: " << balance << ", and interest rate is: " << interestRate << " ===> "
         << interestRate * 100 << "%" << endl;

    return 0;
}