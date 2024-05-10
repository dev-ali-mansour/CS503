#include <iostream>

using namespace std;

int main() {
    float rad;
    const float PI = 3.14159f;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    float area = PI * rad * rad;
    cout << "The area is " << area << endl;

    return 0;
}