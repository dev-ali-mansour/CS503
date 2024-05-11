int main() {
    int *p;
    p = new int; //creates a variable during program execution somewhere in memory and stores the
//address of the allocated memory in p.
    *p = 54; //the allocated memory is accessed via *p because it's name is unknown.

    int *q;
    q = new int[16];
//creates an array of 16 components of type int and stores the base address of the array in q.

    char *c;
    c = new char[13];
//creates an array of 13 components of type char and stores the base address of the array in q.

    delete p;//de-allocate the memory spaces that the pointer p point to.
    delete[] q; //de-allocate the memory spaces that the pointer name point to.
    delete[]c;
}