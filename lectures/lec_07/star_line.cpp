#include <iostream>

using namespace std;//there’s no function declaration as its definition is written before the main function
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// starline() //function definition
void starline() {
    for (int j = 0; j < 45; j++) cout << '*';
    cout << endl;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() { //the main() follows the definition of the function
    starline(); //call to function
    cout << "Data type Range" << endl;
    starline(); //call to function
    cout << "char -128to127 \n" << "int System dependent \n"
         << "long - 2,147,483,648to2,147,483,647 \n";
    starline(); //call to function
    return 0;
}