// 1. Write a program to create and initialize a pointer.
// Sumit Phuyal

#include <stdio.h>

int main() {
    int num = 10;          // Declare and initialize an integer variable
    int *ptr = &num;       // Declare a pointer and initialize it with the address of num

    // Display values
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}



// This C program demonstrates the creation and initialization of a pointer.
// It declares an integer variable 'num' and initializes it with the value 10.
// Then, it declares a pointer 'ptr' and assigns it the address of 'num' using
// the address-of operator (&). The program prints the value of 'num', its address,
// the value of 'ptr' (which is the address of 'num'), and the value pointed
// to by 'ptr' (which is the value of 'num'). The output shows how pointers can be
// used to access and manipulate the value of a variable indirectly. 