// 4. Write a program to copy one array to another using a pointer. 
// Sumit Phuyal

#include <stdio.h>

int main() {
    int sourceArray[5], destinationArray[5]; // Declare source and destination arrays
    int *sourcePtr = sourceArray;            // Pointer to the source array
    int *destPtr = destinationArray;         // Pointer to the destination array

    // Input elements into the source array
    printf("Enter 5 elements for the source array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", sourcePtr + i); // Use pointer arithmetic to input values
    }

    // Copy elements from source array to destination array
    for (int i = 0; i < 5; i++) {
        *(destPtr + i) = *(sourcePtr + i); // Copy using pointers
    }

    // Display the destination array
    printf("Elements of the destination array after copying:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(destPtr + i)); // Use pointer to access elements
    }
    printf("\n");

    return 0;
}

// This program demonstrates how to copy elements from one array to another using pointers.
// It first takes input for the source array, then copies each element to the destination array using pointer arithmetic.
// Finally, it displays the elements of the destination array to verify the copy operation.
// The use of pointers allows for direct manipulation of array elements, showcasing the power of pointers in C programming.
// The program is structured to be simple and clear, making it easy to understand how to work with arrays and pointers in C.