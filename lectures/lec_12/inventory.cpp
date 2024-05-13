#include <iostream>
#include "inventoryItem.h"

using namespace std;

inventoryItem::inventoryItem() {
    inventoryItem("");
}

inventoryItem::inventoryItem(string n) {
    inventoryItem(n, 0, 0);
}

inventoryItem::inventoryItem(string n, int iNum, double cost) {
    inventoryItem(n, iNum, cost, 0);
}

inventoryItem::inventoryItem(string n, int iNum, double cost, int inStock) {
    name = n;
    itemNum = iNum;
    price = cost;
    unitsInStock = inStock;
}

void inventoryItem::updatePrice(double newPrice) {
    price = newPrice;
}

void inventoryItem::print() const {
    cout << "Item Detalis ==> Name: " << name << ", Item Number: " << itemNum
         << ", Price: " << price << ", Units in stock: " << unitsInStock << endl;
}