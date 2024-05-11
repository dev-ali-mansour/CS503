#include <iostream>

using namespace std;
const int NUM_OF_ROWS = 10;
const int NUM_OF_COLUMNS = 10;

void initMatrix(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]);

void readFromUser(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]);

void printMatrix(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]);

void printSmallestElement(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]);

void printSumRows(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]);

int main() {
    int board[NUM_OF_ROWS][NUM_OF_COLUMNS];
    initMatrix(board);
    printMatrix(board);
    readFromUser(board);
    printMatrix(board);
    printSmallestElement(board);
    printSumRows(board);
    return 0;
}

void initMatrix(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]) {
    for (int row = 0; row < NUM_OF_ROWS; row++) {
        for (int col = 0; col < NUM_OF_COLUMNS; col++)
            arr[row][col] = 0;
    }
}

void readFromUser(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]) {
    int count = NUM_OF_ROWS * NUM_OF_COLUMNS;
    cout << "Please enter " << count << " integers\n";
    for (int row = 0; row < NUM_OF_ROWS; row++) {
        for (int col = 0; col < NUM_OF_COLUMNS; col++)
            cin >> arr[row][col];
    }
}

void printMatrix(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]) {
    for (int row = 0; row < NUM_OF_ROWS; row++) {
        for (int col = 0; col < NUM_OF_COLUMNS; col++)
            cout << arr[row][col] << " ";
        cout << endl;
    }
}

void printSmallestElement(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]) {
    int smallest = arr[0][0];
    for (int row = 0; row < NUM_OF_ROWS; row++) {
        for (int col = 0; col < NUM_OF_COLUMNS; col++)
            if (arr[row][col] < smallest)smallest = arr[row][col];
    }
    cout << "The smallest element in the matrix is " << smallest << endl;
}

void printSumRows(int arr[NUM_OF_ROWS][NUM_OF_COLUMNS]) {
    int sum;
    for (int row = 0; row < NUM_OF_ROWS; row++) {
        sum = 0;
        for (int col = 0; col < NUM_OF_COLUMNS; col++)
            sum += arr[row][col];

        cout << "The sum of row " << row + 1 << " = " << sum << endl;

    }
}
