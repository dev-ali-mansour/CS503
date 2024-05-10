#include <iostream>

using namespace std;

int main() {
    int i;
    for (i = 0; i < 10; i++);       // semantic error.
    cout << i << " ";               // will be executed once
    return 0;
}

//Note: The semicolon at the end of the for statement (before the output statement)
//terminates the for loop.