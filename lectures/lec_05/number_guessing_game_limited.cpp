#include <iostream>
#include <cstdlib> //for using rand()

using namespace std;

int main() {
    int noOfGuesses = 0;
    int num = rand() % 100; //a variable to store the random number
    int guess; //a variable to store the number guessed by the user
    bool isGuessed = false; //a boolean variable to control the loop
    while ((noOfGuesses < 5) && (!isGuessed)) //two conditions with 2 loop control variables
    {
        cout << "Enter an integer greater than or equal to 0 and less than 100: ";
        cin >> guess;
        noOfGuesses++;
        if (guess == num) {
            cout << "\n Winner!. You guessed the correct number." << endl;
            isGuessed = true; //loop حتي يخرج من ال
        } else if (guess < num) cout << "Your guess is lower than the number.\n Guess again! \n";
        else cout << "Your guess is higher than the number.\n Guess again! \n";
    } //end while
    if (!isGuessed) cout << "You lose! The correct number is " << num << endl;
    return 0;
}