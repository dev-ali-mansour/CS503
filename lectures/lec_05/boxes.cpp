#include <iostream > //what is the output of this program?
#include <string> // u must include string so that u can use the string data type

using namespace std;

int main() {
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int counter = 0;
    double totalNumOfBoxesSold = 0.0;
    double costOfOneBox;
    cout << "Enter the number of volunteers: ";
    cin >> numOfVolunteers;
    cout << endl;
    while (counter < numOfVolunteers) // < instead of <= as we started with 0
    {
        cout << "Enter the volunteer's name and the number of boxes sold: ";
        cin >> name >> numOfBoxesSold; //read 2 variables
        cout << endl;
        totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
        counter++;
    }
    cout << "The total number of boxes sold: " << totalNumOfBoxesSold << endl;
    cout << "Enter the cost of one box: ";
    cin >> costOfOneBox;
    cout << "\n The total money by selling cookies: $" << totalNumOfBoxesSold * costOfOneBox;
    cout << "\nThe avg no.of boxes sold by each volunteer: " << totalNumOfBoxesSold / counter;
    return 0;
}