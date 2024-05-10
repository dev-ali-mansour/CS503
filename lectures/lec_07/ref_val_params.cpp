#include <iostream>

using namespace std;

void addFirst(int &first, int &second);

void doubleFirst(int one, int two);

void squareFirst(int &ref, int val);

int main() {
    int num = 5;
    cout << "Inside main: num = " << num << endl;
    addFirst(num, num);
    cout << "Inside main after addFirst:" << " num = " << num << endl;
    doubleFirst(num, num);
    cout << "Inside main after " << "doubleFirst: num = " << num << endl;
    squareFirst(num, num);
    cout << "Inside main after " << "squareFirst: num = " << num << endl;
    return 0;
}

void addFirst(int &first, int &second) {
    cout << "Inside addFirst: first = " << first << ", second = " << second << endl;
    first = first + 2;
    cout << "Inside addFirst: first = " << first << ", second = " << second << endl;
    second = second * 2;
    cout << "Inside addFirst: first = " << first << ", second = " << second << endl;
}

void doubleFirst(int one, int two) {
    cout << "Inside doubleFirst: one = " << one << ", two = " << two << endl;
    one = one * 2;
    cout << "Inside doubleFirst: one = " << one << ", two = " << two << endl;
    two = two + 2;
    cout << "Inside doubleFirst: one = " << one << ", two = " << two << endl;
}

void squareFirst(int &ref, int val) {
    cout << "Inside squareFirst: ref = " << ref << ", val = " << val << endl;
    ref = ref * ref;
    cout << "Inside squareFirst: ref = " << ref << ", val = " << val << endl;
    val = val + 2;
    cout << "Inside squareFirst: ref = " << ref << ", val = " << val << endl;
}