#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"please enter an alphabet: ";
    cin>>alpha;
    if(alpha=='a'|| alpha =='o'|| alpha =='e'|| alpha =='i'||alpha=='u')
       	cout<< "vowel";
    else 
       	cout<< "consonent";
    return 0;
}

