// 10. Write a program to read the array elements and print the value with addresses.
// Sumit Phuyal

#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array elements with their addresses
    printf("\nArray elements and their addresses:\n");
    for (i = 0; i < n; i++) {
        printf("Value: %d, Address: %u\n", arr[i], &arr[i]);
    }

    return 0;
}

// This C program reads an array of integers from the user and prints each element
// along with its memory address. It first prompts the user to enter the number of elements
// in the array, then allocates an array of that size. The program reads the elements
// into the array and finally prints each element's value and its corresponding address in memory.
// The addresses are printed using the %p format specifier, which is used for pointer types.
// This demonstrates how to work with arrays and pointers in C, allowing users to see
// both the values stored in the array and their locations in memory.
// The program outputs the values and addresses of the array elements, providing insight
// into how data is stored in memory in C.