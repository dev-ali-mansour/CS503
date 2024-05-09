//program to calculate area, circumference of a circle.
# include <iostream>
using namespace std;
int main()
{
float radius, area, cir;
float const pi= 3.14;
cout<<"Please enter the radius: ";
cin>> radius;
	area= pi*radius* radius;
	cir= 2*pi* radius;
	cout<<"Area= "<< area<< endl<<"circumference"<< cir <<endl;
return 0;
}
