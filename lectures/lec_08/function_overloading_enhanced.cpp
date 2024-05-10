#include <iostream>

using namespace std;

void repchar(char, int); //declarations
void repchar(char);
void repchar();

int main() {
    repchar();
    repchar('=');
    repchar('+', 30);
    return 0;
}

void repchar(char ch, int n) {
    for (int j = 0; j < n; j++)cout << ch; //prints specified character
    cout << endl;
}

void repchar(char ch) {
    repchar(ch, 45);
}

void repchar() {
    repchar('*');
}