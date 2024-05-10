#include <iostream>

using namespace std;

int main() {
    cout << "While Output" << endl;
    int i = 11;
    while (i <= 10) {
        cout << i << " ";
        i = i + 5;
    }
    cout << "=====================" << endl;
    cout << "Do While Output" << endl;
    do {
        cout << i << " ";
        i = i + 5;
    } while (i <= 10);
    cout << endl;
    return 0;
}