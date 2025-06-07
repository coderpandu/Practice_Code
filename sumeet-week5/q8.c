// 8. Write a program to implement passing arrays to a function.
// Sumit Phuyal

#include <stdio.h>

// Function prototype
void printArray(int arr[], int size);

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    // Passing array to function
    printArray(numbers, size);

    return 0;
}

// Function definition
void printArray(int arr[], int size) {
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
