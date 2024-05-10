#include <iostream>

using namespace std;
const int SENTINEL = -999; // the special value to stop the loop
int main() {
    int number = 0; //variable to store the number
    double sum = 0.0; //variable to store the sum
    int count = 0; //variable to store the total numbers read
    cout << "Enter integers ending with " << SENTINEL << endl;
    cin >> number; //initialize the variable
    while (number != SENTINEL) {
        sum = sum + number;
        count++;
        cin >> number; //update the loop variable
    }
    cout << "The sum of the " << count << " numbers is " << sum << endl;
    cout << "The average is " << sum / count << endl;
    return 0;
}