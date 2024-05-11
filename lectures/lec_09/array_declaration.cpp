#include <iostream>

using namespace std;

int main() {
    const int ARRAY_SIZE = 10;
    int list[ARRAY_SIZE];
//    When you declare an array, its size must be known.
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
//    int list[arraySize]; //not allowed

    // Initialization during Declaration
    int myList[5] = {0, 4, 8, 12, 16};
    int yourList[5];

    /*To copy one array into another array, you must copy one component
    at a time using a loop:*/
    for (int index = 0; index < 5; index++) yourList[index] = myList[index];

    int list1[10] = {0};
//declares list to be an array of 10 components and initializes all the components to 0.
    for (int i = 0; i < 10; i++)cout << list1[i] << " ";
    cout << endl;
    int list2[10] = {4}; //declares list to be an array of 10 components and
//initializes the first element to 4 and then the rest elements to 0.
    for (int i = 0; i < 10; i++)cout << list1[i] << " ";
    cout << endl;

    int list3[10] = {8, 5, 12};
    /*declares list3 to be an array of 10 components and initializes list[0] to8,list[1]to 5,
      list[2] to 12, and all other components to 0.*/
    int list4[] = {5, 6, 3};
    /*declares list to be an array of 3 components and initializes list[0] to 5,list[1]to 6,
    and list[2] to 3.*/
    return 0;
}