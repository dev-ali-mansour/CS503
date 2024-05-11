#include <iostream>

using namespace std;

int main() {
    int **board, rows, columns;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> columns;
    board = new int* [rows]; //dynamic array of pointers to int rows
    for(int row =0; row<rows; row++)board[row]=new int[columns];
    //each i-th pointer is now pointing to dynamic array(size=columns)of actual int values

    return 0;
}