#include <iostream>

using namespace std;

int main() {
    int limit; //store the number of  عددthe entered items (N)
    int number; //a variable to store the entered number
    double sum = 0.0; //a variable to store the sum
    int counter = 0; //a loop control variable MUST BE INITIALIZED BEFORE THE LOOP
    cout << "Enter the number of integers in the list: ";
    cin >> limit;
    cout << "Enter " << limit << " integers: "
         << endl; //will be appeared once to a user as it’s outside the loop!
    while (counter < limit) //how many times this loop will be executed?
    { //start while
        cin >> number;
        sum = sum + number; //sum+=number;
        counter++;
    } //end of while
    cout << "The sum of the " << limit << " numbers= " << sum << endl;
    double avg = sum / counter; //declare a new needed variable, avg
    cout << "The average = " << avg << endl;
    return 0;
}