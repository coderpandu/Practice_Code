// 9. Write a program to change the value of a constant integer using a pointer. 
// Sumit Phuyal

#include <stdio.h>

int main() {
    const int constantValue = 10; // Declare a constant integer
    int *ptr = (int *)&constantValue; // Cast the constant integer to a pointer

    printf("Original constant value: %d\n", constantValue);

    // Change the value using the pointer
    *ptr = 20; // This is not safe and can lead to undefined behavior

    printf("Modified constant value: %d\n", constantValue); // This may not reflect the change

    return 0;
}

// Note: Modifying a constant value through a pointer is not recommended and can lead to undefined behavior.
// This program demonstrates how to change the value of a constant integer using a pointer.
// However, it is important to understand that this practice is unsafe and should be avoided in real-world applications.
// The output may not reflect the change due to the nature of constant variables in C.
