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

/*
 All the three loops have their place in C++.
If you know, or the program can determine in advance, the number of
repetitions needed, the for loop is the correct choice.
If you do not know, and the program cannot determine in advance the
number of repetitions needed, and it could be zero, the while loop is
the right choice.
If you do not know, and the program cannot determine in advance the
number of repetitions needed, and it is at least once, the do...while
loop is the right choice.
 */