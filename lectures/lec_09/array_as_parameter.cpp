#include <iostream>

using namespace std;
const int ARRAY_SIZE = 10;

void initializeArray(int x[], int sizeX);

void fillArray(int x[], int sizeX);

void printArray(const int x[], int sizeX);

int sumArray(const int x[], int sizeX);

int indexLargestElement(const int x[], int sizeX);

void copyArray(int list1[], int src, int list2[], int tar, int numOfElements);

void copyArray(int list1[], int list2[], int tar, int numOfElements);

int indexSmallestElement(const int x[], int sizeX);

int main() {
    int listA[ARRAY_SIZE] = {0};
//Declare listA of 10 components& initialize each component to 0
    int listB[ARRAY_SIZE];
//Declare the array listB of 10 components.//Arrays as parameters to functions
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "listA elements: ";
    printArray(listA, ARRAY_SIZE);
//Output the elements of listA using the function printArray
    cout << endl;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    initializeArray(listB, ARRAY_SIZE);
//Initialize listB using the function initializeArray
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "listB elements: ";
//Output the elements of listB
    printArray(listB, ARRAY_SIZE);
    cout << endl << " \n Enter " << ARRAY_SIZE << " integers: ";
    fillArray(listA, ARRAY_SIZE); //Input data into listA usingthefunction fillArray
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << " \n After filling listA, the elements are:" << endl;
    printArray(listA, ARRAY_SIZE); //Output the elements of listA
    cout << endl
         << endl;/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Find and output the sum of the elements of listA
    cout << " The sum of the elements of listA is: "
         << sumArray(listA, ARRAY_SIZE) << endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Find and output the position of the largest element in listA
    cout << " The position of the largest element in listA is: " <<
         indexLargestElement(listA, ARRAY_SIZE);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Find and output the largest element in listA
    cout << "\n The largest element in listA is: "
         << listA[indexLargestElement(listA, ARRAY_SIZE)];
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Copy the elements of listA into listB using the function copyArray
    copyArray(listA, 0, listB, 0, ARRAY_SIZE);
//    copyArray(listA, listB, 0, ARRAY_SIZE);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n After copying the elements of listA into listB," << endl << "listB elements are: ";
//Output the elements of listB
    printArray(listB, ARRAY_SIZE);
    cout << endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Find and output the smallest element in listA
    cout << "\n The smallest element in listA is: "
         << listA[indexSmallestElement(listA, ARRAY_SIZE)];

    return 0;
}

void initializeArray(int list[], int listSize) {
    int index;
    for (index = 0; index < listSize; index++) list[index] = 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fillArray(int list[], int listSize) {
    int index;
    for (index = 0; index < listSize; index++) cin >> list[index];
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void printArray(const int list[], int listSize) {
    int index;
    for (index = 0; index < listSize; index++) cout << list[index] << " ";
}

int sumArray(const int list[], int listSize) {
    int index, sum = 0;
    for (index = 0; index < listSize; index++) sum = sum + list[index];
    return sum;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int indexLargestElement(const int list[], int listSize) {
    int index, maxIndex = 0;
//assume the first element is the largest
    for (index = 1; index < listSize; index++)
        if (list[maxIndex] < list[index]) maxIndex = index;
    return maxIndex;
}

//homework:alter this function to find the smallest element in an array & returns it
int indexSmallestElement(const int list[], int listSize) {
    int index, minIndex = 0;
//assume the first element is the smallest
    for (index = 1; index < listSize; index++)
        if (list[minIndex] > list[index]) minIndex = index;
    return minIndex;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void copyArray(int list1[], int src, int list2[], int tar, int numOfElements) {
    for (int index = src; index < src + numOfElements; index++) {
        list2[index] = list1[tar];
        tar++;
    }
}
//homework: write a different definition to this function
void copyArray(int list1[],  int list2[],int tar, int numOfElements) {
    for (int index = 0; index < numOfElements; index++) {
        list2[index] = list1[tar];
        tar++;
    }
}

/*
Functions Cannot Return a Value of the Type Array
        C++ does not allow functions to return a value of the type array.
Note that the previous functions sumArray and indexLargestElement
return values of type int.*/
