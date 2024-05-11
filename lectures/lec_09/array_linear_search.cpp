#include <iostream>

using namespace std;
const int ARRAY_SIZE = 10;

int seqSearch(const int list[], int listLength, int searchItem);

int main() {
    int number, intList[ARRAY_SIZE];
    cout << "Enter " << ARRAY_SIZE << " integers." << endl;
    for (int index = 0; index < ARRAY_SIZE; index++) cin >> intList[index];
    cout << "\nEnter the number to be searched: ";
    cin >> number;
    cout << endl;
    int pos = seqSearch(intList, ARRAY_SIZE, number);
    if (pos != -1) cout << number << " is found at position " << pos << endl;
    else cout << " " << number << " is not in the list." << endl;
    return 0;
}

int seqSearch(const int list[], int listLength, int searchItem) {
    int loc = 0;
    bool found = false;
    while (loc < listLength && !found)
//2 conditions
        if (list[loc] == searchItem) found = true;
        else loc++;
    if (found) return loc;
    else return -1;
}