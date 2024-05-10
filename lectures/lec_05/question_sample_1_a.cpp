#include <iostream>

using namespace std;

int main() {
    // What is the output of the following C++ code?
    int count = 1;
    int y = 100;
    while (count < 100) {
        y = y - 1;
        count++;
    }
    cout << "y =" << y << "andcount=" << count << endl;
    return 0;
}