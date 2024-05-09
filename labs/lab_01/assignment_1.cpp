/*
 Write a c ++ program to find the
volume and surface area of sphere.
Hint: PI=3.14
volume=4.0/3 *pi*r*r*r;
area=4*pi*r*r;
 */

#include <iostream>

using namespace std;

int main() {
    const double PI = 3.14;
    double radius = 0.0, volume, area;
    cout << "Enter sphere radius:";
    cin >> radius;
    volume = 4.0 / 3 * PI * radius * radius * radius;
    area = 4.0 * PI * radius * radius;

    cout << "Sphere radius = " << radius << ", it's volume = " << volume << ", and it's area = " << area << endl;

    return 0;
}