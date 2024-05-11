#include <iostream>

using namespace std;

int main() {
    double sales[10];
//declares an array sales of10components,with each component being of type double
    int index;
    double sum, average;
//1.Initializing an array:The following loop initializes every component of sales to0.0
    for (index = 0; index < 10; index++) sales[index] = 0.0;
//2.Reading data into an array:The following loop inputs the data into the array sales.
    for (index = 0; index < 10; index++) cin >> sales[index];
//3. Printing an array: The following loop outputs the array sales.
    for (index = 0; index < 10; index++) cout << sales[index] << " ";
//4.Finding the sum& average of an array:find the total sale&the average sale amounts.
    sum = 0.0; // before the loop
    for (index = 0; index < 10; index++) sum = sum + sales[index];
    average = sum / 10;

    cout << "\nSum = " << sum << ", Average = " << average << endl;
}