#include <iostream>

using namespace std;

int main() {
    int num, fact;
    while (1) //non zero value evaluates to true
    {
        cout << "Enter the positive number \n";
        cin >> num;
        if (num < 0) {
            cout << "This is a negative number!\n";
            continue;
        } //exit the current iteration
        if (num == 0) {
            cout << "This is zero! The program will terminate now!\n";
            break;
        }//exit while
        for (fact = 1; num > 0; num--) fact *= num; //fact = fact * num
        cout << "The factorial of this number is: " << fact << endl;
        break; //to exit the while loop
    } //end while
    cout << "*******************" << endl;
    return 0;
} // end main

/*
 Note:
 break: terminates the loop. as with switch
continue: terminates the current iteration to start a new one.
 The break statement is typically used for two purposes:
• To exit early from a loop.
• To skip the remainder of the switch structure.
After the break statement executes, the program continues to execute
with the first statement after the loop.
 */