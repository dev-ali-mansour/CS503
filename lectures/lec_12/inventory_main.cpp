#include <iostream>
#include "inventoryItem.h"

using namespace std;

const int ADD_ITEMS = 1;
const int PRINT_ITEMS = 2;
const int EXIT = 3;

struct inventoryManager {
    inventoryItem *items;
    int size = 0, itemsCount = 0;
};

void initManager(inventoryManager &manager);

void showMainMenu(inventoryManager &manager);

void addItems(inventoryManager &manager);

void printItems(inventoryManager manager);

int main() {
    inventoryManager invManager;
    initManager(invManager);
    showMainMenu(invManager);

    return 0;
}

void initManager(inventoryManager &manager) {
    cout << "==============================\n";
    cout << "Welcome to Inventory Manager\n";
    cout << "==============================\n";
    cout << "First enter inventoryItem items count:";
    cin >> manager.size;
    manager.items = new inventoryItem[manager.size];
    cout << "Congrats! initialization completed successfully\n";
}

void showMainMenu(inventoryManager &manager) {

    bool repeat = true;
    do {
        int ch;
        cout << "===========\n";
        cout << "Main Menu\n";
        cout << "===========\n";
        cout << "Choose an option from the list below:\n";
        cout << ADD_ITEMS << ") Add Items\n";
        cout << PRINT_ITEMS << ") Print Items\n";
        cout << EXIT << ") Exit\n";
        cin >> ch;
        switch (ch) {
            case ADD_ITEMS:
                addItems(manager);
                break;
            case PRINT_ITEMS:
                printItems(manager);
                break;
            case EXIT:
                repeat = false;
                break;
            default:
                cout << "Invalid choice! try again\n";
        }
    } while (repeat);
}

void addItems(inventoryManager &manager) {
    bool repeat = false;
    do {
        if (manager.itemsCount == manager.size) {
            cout << "You can not add items any more!\n";
            break;
        }
        string name;
        int itemNum, unitsInStock;
        double price;
        cout << "Enter item details to add to the inventoryItem\n";
        cout << "Enter name:";
        cin >> name;
        cout << "Enter item number:";
        cin >> itemNum;
        cout << "Enter price:";
        cin >> price;
        cout << "Enter units in stock:";
        cin >> unitsInStock;

        inventoryItem item = inventoryItem(name, itemNum, price, unitsInStock);
        manager.items[manager.itemsCount++] = item;
        char ch;
        cout << "Do you want to add another item?";
        cin >> ch;
        if (ch == 'Y' || ch == 'y') repeat = true;

    } while (repeat);
}

void printItems(inventoryManager manager) {
    cout << "Items List:\n";
    if (manager.itemsCount > 0)
        for (int i = 0; i < manager.itemsCount; ++i) {
            manager.items[i].print();
        }
    else cout << "Empty Item List! Add items to be printed.\n";
}


