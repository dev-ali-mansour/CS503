#include <iostream>

using namespace std;

class inventoryItem {
    string name;
    int itemNum;
    double price;
    int unitsInStock;

public:
    inventoryItem();

    inventoryItem(string n);

    inventoryItem(string n, int iNum, double cost);

    inventoryItem(string n, int iNum, double cost, int inStock);

    void updatePrice(double newPrice);

    void print() const;
};