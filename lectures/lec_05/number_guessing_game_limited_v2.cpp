#include <iostream>
#include <cstdlib> //for using rand()

using namespace std;

int main() {
    int noOfGuesses = 1, num = rand() % 100, guess;
    bool isGuessed = false;
    while (!isGuessed) {
        cout << "Enter an integer greater than or equal to 0 and less than 100: ";
        cin >> guess;
        noOfGuesses++;
        if (guess == num) {
            cout << "\n Winner!. You guessed the correct number." << endl;
            isGuessed = true;
        } else if (noOfGuesses > 5) {
            cout << "You lose! The correct number is " << num << endl;
            break; // Here we used break statement to end the loop with lose message
        } else if (guess < num) cout << "Your guess is lower than the number.\n Guess again! \n";
        else cout << "Your guess is higher than the number.\n Guess again! \n";
    }
    return 0;
}