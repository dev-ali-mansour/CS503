#include <iostream>

using namespace std;

int main() {
    int i = 0;
    do {
        cout << i << " ";
        i = i + 5;
    } while (i <= 20);
    return 0;
}

/*
 Note:
Because the while and for loops both have entry conditions, these loops
may never activate.
The do...while loop, on the other hand, has an exit condition and therefore
always executes the statement at least once.
 */