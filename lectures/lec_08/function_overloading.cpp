#include <iostream>
using namespace std;
void repchar(); //declarations
void repchar(char);
void repchar(char, int);
int main() {
    repchar();
    repchar('=');
    repchar('+', 30);
    return 0; }
void repchar (char ch)
{
    for(int j=0;j<45;j++)cout<<ch; //prints specified character
    cout << endl;
}
void repchar()
{
    for (int j=0; j<45; j++) cout<<'*'; //always prints asterisk
    cout << endl;
}
void repchar (char ch, int n)
{
    for (int j=0; j<n; j++)cout<<ch; //prints specified character
    cout << endl;
}