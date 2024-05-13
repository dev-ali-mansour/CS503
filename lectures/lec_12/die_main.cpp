#include <iostream>
#include "die.h"

using namespace std;

int main() {
    die die1;
    die die2;
    cout << "die1: " << die1.getNum() << endl;
    cout << "die2: " << die2.getNum() << endl;
    cout << "After rolling die1: " << die1.roll() << endl;
    cout << "After rolling die2: " << die2.roll() << endl;
    cout << "The sum of the numbers rolled by the dice is:" << die1.getNum() + die2.getNum();
    cout << " \n After again rolling,the sum of the numbers rolled is:" << die1.roll() + die2.roll();
    cout << endl;
    return 0;
} //end main