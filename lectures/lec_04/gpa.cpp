#include <iostream>

using namespace std;

int main() {
    double gpa;
    cout << "pls enter ur gpa \n";
    cin >> gpa;
    if (gpa >= 2.0) {
        if (gpa >= 3.9) cout << "Dean\'s Honor list." << endl;
    } else cout << "current gpa below graduation requirements." << endl;

    return 0;
}