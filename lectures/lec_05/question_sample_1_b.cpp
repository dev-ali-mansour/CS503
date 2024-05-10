/*
What is the output of the following C++ code?
Suppose that the input is:
58 23 46 75 98 150 12 176 145 -999
What is the output of the following program?
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << " enter a num ";
    cin >> num;
    while (num != -999) {
        cout << num % 25 << " " << endl;
        cin >> num;
    }
    cout << endl;
    return 0;
}

/*
Output:
8
23
21
0
23
0
12
1
20

 */