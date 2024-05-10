#include <iostream>
#include <cstdlib> // to use the function rand() of the header file cstdlib

using namespace std;

int main() {
    int num = rand() % 100; //generate a random number between 0 and 99
    int guess; //variable to store the number guessed by the user
    bool isGuessed = false; //boolean variable to control the loop
    while (!isGuessed) {
        cout << "Enter an integer greater than or equal to 0 and less than 100: ";
        cin >> guess;
        if (guess == num) {
            cout << " \n You guessed the correct number. " << endl;
            isGuessed = true; //to exit from the loop
        } else if (guess < num) cout << "Your guess is lower than the number.\n Guess again! \n";
        else cout << "Your guess is higher than the number. \n Guess again! " << endl;
    }
    return 0;
}