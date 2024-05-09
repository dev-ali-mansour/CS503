#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "enter ur age" << endl;
    cin >> age;

    switch (age >= 18) {
        case true: // Could be written case 1:
            cout << "Old enough to vote." << endl;
            break;
        case false: // Could be written case 0:
            cout << "Not old enough to vote." << endl;
    }

    return 0;
}