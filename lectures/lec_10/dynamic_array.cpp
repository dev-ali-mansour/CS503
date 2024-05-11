#include <iostream>

using namespace std;

int main() {
    int *intList;                   //declares intList to be a pointer of type int
    int arraySize;                  //declares arraySize to be an int variable


    cout << "Enter array size: ";   //prompts the user to enter the size of the array
    cin >> arraySize;
    intList = new int[arraySize];   //creates an array of the size specified by arraySize

    //Access the components of the dynamic array
    *intList = 25; //stores 25 into the first memory location
    intList++;// intList points to the next array component
    *intList = 35; //stores 35 into the second memory location

    intList[0] = 25;
    //store 25 into the 1st array component //intList[0] refers to the 1st array component
    intList[1] = 35;
    //store 35 into the 2nd array component //intList[1] refers to the 2nd array component

    //The following for loop initializes each array component to 0:
    for (int j = 0; j < arraySize; j++) intList[j] = 0;

    return 0;
}