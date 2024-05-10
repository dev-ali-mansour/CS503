#include <iostream> // The factorial program

using namespace std;

int fact(int num); //function prototype
int main() {
    int n;
    cout << "Enter an integer number: ";
    cin >> n;
    cout << "\n The factorial is: " << fact(n) << endl;
    return 0;
}

int fact(int num) {
    if (num == 0) return 1;
    else return num * fact(num - 1);
}