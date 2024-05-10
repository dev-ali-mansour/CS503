#include <iostream>

using namespace std;

int main() {
    double degree1, degree2, degree3;
    cout << "Enter your 3 marks:\n";
    cin >> degree1 >> degree2 >> degree3;

    // You shouldn't do the following (although it is correct)
    cout << "The undesired average is: " << (degree1 + degree2 + degree3) / 3 << endl;

    // Instead you should follow this way
    double total = 0.0, avg = 0.0;
    total = degree1 + degree2 + degree3;
    avg = total / 3;
    cout << "The undesired average is: " << avg << endl;

    return 0;
}