#include <stdio.h>

int main(){
    /* int age = 22;
    int *ptr = &age; // Pointer to the variable 'age'
    printf("Age: %d\n", *ptr); // Dereferencing the pointer to get the value of 'age'

    int _num = *ptr;
    printf("Num: %d\n", _num); // Printing the value stored in '_num'
    printf("Address of age: %p\n",&age); // Printing the address of 'age'
    printf("Address of ptr: %p\n",ptr); // Printing the address stored in 'ptr'
    printf("Address of _num: %p\n",&_num); // Printing the address of '_num'
    printf("Address of ptr: %p\n",&ptr); // Printing the address of 'ptr'
    printf("%u\n",ptr); // Printing the size of the pointer variable 'ptr'

    printf("%d\n", *ptr); // Dereferencing the pointer to get the value of 'age' again
    printf("%d\n", age); // Printing the value of 'age' directly
    printf("%d\n", *(&age)); // Printing the value of address of 'age' dereferenced
    printf("%d\n", *(&ptr)); // Printing the value of address of 'ptr' dereferenced
    return 0; */

    /* int *ptr;
    int x;

    ptr = &x; // Assigning the address of 'x' to the pointer 'ptr'
    *ptr = 10; // Dereferencing 'ptr' to assign the value 10 to 'x'
    printf("Value of x: %d\n", x); // Printing the value of 'x'
    printf("*ptr: %d\n", *ptr); // Dereferencing 'ptr' to print the value it points to

    *ptr += 5; // Incrementing the value pointed to by 'ptr' by 5
    printf("Value of x after increment: %d\n", x); // Printing the updated value of 'x'
    printf("*ptr after increment: %d\n", *ptr); // Dereferencing 'ptr' to print the updated value it points to

    (*ptr)++; // Incrementing the value pointed to by 'ptr' using parentheses
    printf("Value of x after second increment: %d\n", x); // Printing the value of 'x' after the second increment
    printf("*ptr after second increment: %d\n", *ptr); // Dereferencing 'ptr' to print the updated value it points to
    return 0; */

    int i = 10;
    int *ptr = &i;
    int **pptr = &ptr; // Pointer to pointer, pointing to 'ptr'

    printf("Value of i: %d\n", i); // Printing the value of 'i'
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereferencing 'ptr' to get the value of 'i'
    printf("Value pointed to by pptr: %p\n", *pptr); // Dereferencing 'pptr' to get the address stored in 'ptr'
    printf("Value pointed to by pptr: %d\n", **pptr); // Dereferencing 'pptr' twice to get the value of 'i'
    return 0;
}

