//program to read 3 numbers and calculate thier sum.
# include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	int result;
	cout<<"Please enter three numbers: ";
	cin>> num1;
	cin>> num2;
	cin>> num3;
	result= num1+ num2+ num3;
	cout<<"Summation= " <<result;
	return 0;
}
