#include <iostream>

using namespace std;

void fill(int **p, int rowSize, int columnSize);

void print(int **p, int rowSize, int columnSize);

int main() {
    int **board, rows, columns;
    cout << "Enter the number of rows and columns: ";
    cout << endl;
    cin >> rows >> columns;
    //Create the rows of board
    board = new int *[rows];
    //Create the columns of board
    for (int row = 0; row < rows; row++) board[row] = new int[columns];
    //Insert elements into board
    fill(board, rows, columns);
    //Output the elements of board
    cout << "Board:" << endl;
    print(board, rows, columns);

    delete[]board;

    return 0;
}

void fill(int **p, int rowSize, int columnSize) {
    for (int row = 0; row < rowSize; row++) {
        cout << "Enter " << columnSize << " number(s) for row number " << row << ": ";
        for (int col = 0; col < columnSize; col++) cin >> p[row][col];
        cout << endl;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void print(int **p, int rowSize, int columnSize) {
    for (int row = 0; row < rowSize; row++) {
        for (int col = 0; col < columnSize; col++) cout << "\t" << p[row][col];
        cout << endl;
    }
}