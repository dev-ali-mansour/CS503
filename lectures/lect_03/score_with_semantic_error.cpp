#include <iostream>

using namespace std;

int main() {
    double score;
    cout << "Enter your degree in C++" << endl;
    cin >> score;

    if (score >= 60); // The if statement terminate because of the semicolon
    cout << "Passing" << endl;
    //this statement isn’t part of the if statement & it’ll always be executed n any case


    return 0;
}