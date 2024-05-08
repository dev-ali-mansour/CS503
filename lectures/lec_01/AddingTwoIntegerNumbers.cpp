#include <iostream>

//we didn't write using namespace std; so we’ll repeat std::cout many times

int main() {
    int integer1, integer2, sum;
    std::cout << "Enter the first integer\n";
    std::cin >> integer1;
    std::cout << "Enter the second integer\n";
    std::cin >> integer2;
    sum = integer1 + integer2;
    std::cout << "The sum is " << sum << std::endl;

    return 0;
}