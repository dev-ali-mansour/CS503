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

    return 0;
}