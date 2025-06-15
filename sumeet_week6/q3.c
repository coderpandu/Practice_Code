// 3. Write a program to find the sum of all the elements of an array using a pointer.
// Sumit Phuyal

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Array initialization
    int *ptr = arr;                    // Pointer to the first element of the array
    int sum = 0;

    // Loop through the array using the pointer
    for(int i = 0; i < 5; i++) {
        sum += *(ptr + i);  // Access each element using pointer arithmetic
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}


// This C program initializes an array of integers and uses a pointer to calculate
// the sum of its elements. It declares an array 'arr' with 5 elements and initializes
// it with values. A pointer 'ptr' is assigned the address of the first element of the
// array. The program then uses a loop to iterate through the array using pointer arithmetic,
// accessing each element by dereferencing the pointer. The sum of the elements is calculated
// and printed to the console. This demonstrates how pointers can be used to manipulate
// arrays and perform operations on their elements in C.
// The program outputs the sum of the array elements, which is 150 in this case.
