#include <iostream>

using namespace std;

int main() {
    int item0, item1, item2, item3, item4, sum;
    cout << "Enter five integers: ";
    cin >> item0 >> item1 >> item2 >> item3 >> item4;
    cout << endl;
    sum = item0 + item1 + item2 + item3 + item4;
    cout << "The sum of the numbers = " << sum << endl;
    cout << "The numbers in the reverse order are: ";
    cout << item4 << " " << item3 << " " << item2 << " " << item1 << " " << item0;
    return 0;
}