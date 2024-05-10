#include <iostream>

using namespace std;

//What will be the output if we omit the {} from the for loop?
int main() {
    for (int i = 1; i <= 5; i++)
        cout << "Hello!" << endl;
    cout << "*" << endl;
    return 0;
}