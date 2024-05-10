#include <iostream>

using namespace std;

int main(){
    int i = 0;
    while (i <= 20)
    {
        cout << i << " \t ";
        i = i + 5; //change it to print: 0 2 4 6 8 10 and 1 3 5 7 9 and 3 6 9
    }
    cout << " \n****************************"<< endl;

    return 0;
}