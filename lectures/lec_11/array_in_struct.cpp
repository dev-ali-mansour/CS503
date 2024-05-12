#include <iostream>

using namespace std;

const int ARRAY_SIZE = 1000;
struct listType {
    int listElem[ARRAY_SIZE]; //an array
    int listLength;
};

int seqSearch(const listType &list, int searchItem) { //a constant reference parameter
    int loc;
    bool found = false;
    for (loc = 0; loc < list.listLength; loc++)
        if (list.listElem[loc] == searchItem) {
            found = true;
            break;
        }
    if (found)
        return loc; //its index
    else
        return -1;
}

int main() {
    listType t; //declares t to be a struct variable of type listType
    t.listLength = 0;
    t.listLength++;
    t.listLength++;
    t.listElem[0] = 12;
    t.listElem[1] = 37;

    return 0;
}