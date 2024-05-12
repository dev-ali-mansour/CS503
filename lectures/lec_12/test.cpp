#include <iostream> //note the angular brackets < >
#include "clockType.h" //note the double quotation marks

using namespace std;

int main() {
    clockType myClock, yourClock;
    int hours, minutes, seconds;
    //Set the time of myClock
    myClock.setTime(5, 4, 30);
    cout << "myClock: ";
    //print the time of myClock
    myClock.printTime();
    cout << endl << "yourClock: ";
    //print the time of yourClock
    yourClock.printTime();
    cout << endl;
    //Set the time of yourClock
    yourClock.setTime(5, 45, 16);
    cout << "After setting, yourClock: ";
    yourClock.printTime(); //print the time of yourClock
    cout << endl;
    //Set the time of myClock using the value of the variables hours,minutes,and seconds
    myClock.setTime(hours, minutes, seconds);
    cout << "New myClock: ";
//print the time of myClock
    myClock.printTime();
    cout << endl;
    //Increment the time of myClock by one second
    myClock.incrementSeconds();
    cout << "After incrementing myClock by one second, myClock: ";
//print the time of myClock
    myClock.printTime();
    cout << endl;
//Retrieve the hours, minutes, and seconds of the object myClock
    myClock.getTime(hours, minutes, seconds);
//Output the value of hours, minutes, and seconds
    cout << "hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << endl;
    return 0;
} //end main