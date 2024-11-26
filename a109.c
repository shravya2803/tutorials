#include <stdio.h>

int main() {
    int var = 10; // normal variable whose value we want to modify
    int *ptr; // pointer variable

    // initialize the pointer with the address of var
    ptr = &var;

    // print the original value of var
    printf("Original value of var: %d\n", var);

    // modify the value of var using the pointer
    *ptr = 20;

    // print the modified value of var
    printf("Modified value of var: %d\n", var);

    return 0;
}