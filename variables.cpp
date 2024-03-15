#include <iostream>

using namespace std;

int main() {
    cout << "Variables in C++" << endl;
    string x; //Declaration Statement
    x = "Ahmed"; //Initialization Statement
    int y = 0; // Declaration And Initialization Statement
    cout << "My name is " << x << "\n";
    y = 50; // Assignment Statement
    cout<<"My age is "<<y;

    /*
     Variables Declaration Rules:
     1- variable name can start with alphabet character or underscore(_) ex. x1, _s, age.
     2- Variable Name can't be start with numbers ex. 1x.
     3- No keyword can be used as variable name ex. main, int.
      */

    return 0;
}
