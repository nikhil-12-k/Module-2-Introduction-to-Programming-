#include <stdio.h>

int main() {
    int num = 10;      // Declare an integer variable
    int *ptr;          // Declare a pointer to int

    ptr = &num;        // Store the address of 'num' in the pointer

    printf("Original value of num: %d\n", num);

    // Modify the value of 'num' using the pointer
    *ptr = 20;

    printf("Modified value of num using pointer: %d\n", num);

    return 0;
}
