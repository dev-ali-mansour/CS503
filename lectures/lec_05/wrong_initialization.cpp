#include <iostream>

using namespace std;

int main() {
    int i = 20; //wrong initialization
    while (i < 20) //initially the loop entry condition evaluates to false
    { //the body of the while loop will never execute
        cout << i << " "; //there won’t be any output
        i = i + 5; //the value of i remains 20
    }
    cout << " **********" << endl; //the first statement that will be executed
    return 0;
}