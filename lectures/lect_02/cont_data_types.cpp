#include <iostream>

using namespace std;

int main() {
    // Integer Types
    /*
     NOTE: The size of type int is system dependent. In contrast,types long and
            short have fixed sizes no matter what system is used.
            int in 32 bits system is 2 bytes
            int in 64 bits system is 4 bytes
            long is 4 bytes
     */

    int x;
    long int var1; // is equivalent to long var1;

    // Floating Types
    /*
     They have both an integer part (to the left of the decimal point) and
     a fractional part (to the right of it).

     Note: The maximum number of significant digits is called "The precision".
     That is the number of decimal places.

     Float Type occupies 4 bytes in memory with a precision of 7 digits.
     Double Type occupies 8 bytes in memory with a precision of 15.

     In C++, floating-point numbers are considered of type double by default.
     Therefore, if you use the data type float, certain compilers might give you
     a warning message, such as “truncation from double to float”.
     To avoid such warning messages, you should use the double data type.
     */
    float temp;
    double temp2 = 64.25;

    const float CONVERSION = 2.5f; // to avoid truncation from double to float.

    // Bool Type
    // Variables of type bool can have only two possible values: true and false.
    bool isValid;

    // Multiple Declaration
    long pop1, pop2, pop3;

    // Multiple declaration and initialization:
    long pop5 = 2425785, pop6 = 47, pop7 = 9761;



    return 0;
}