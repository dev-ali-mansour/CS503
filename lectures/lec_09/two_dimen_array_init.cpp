#include <iostream>

using namespace std;

int main(){
    const int NUMBER_OF_ROWS = 7;
    const int NUMBER_OF_COLUMNS = 6;
    int matrix[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
    
    for (int row = 0; row < NUMBER_OF_ROWS; row++)
        for (int col = 0; col < NUMBER_OF_COLUMNS; col++)
            matrix[row][col] = 0;

}