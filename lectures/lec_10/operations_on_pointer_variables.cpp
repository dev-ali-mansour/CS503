/* Operations on Pointer Variables
The operations that are allowed on pointer variables are:
*Assignment operations:
The value of one pointer can be assigned to another pointer of the same type
*Relational operations :
Two pointers of the same type can be compared for equality, and so on
*Some limited arithmetic operations:
Integer values can be added and subtracted from a pointer.
The value of one pointer can be subtracted from another pointer.*/

int main() {
    int *p, *q;
    p = q; //after this statement executes, both p & q point to the same memory location.
    p == q; //evaluates to true if p & q have the same value (if they point to the same location)
    p != q;//evaluates to true if p and q point to different memory locations.

    p++; //or p = p + 1; //increments the value of p by 4 bytes as p is a pointer of type int.
    p = p + 2;//increments the value of p by 8 bytes.

}
