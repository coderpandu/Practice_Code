// 9. Write a program to implement a return array from a function.
// Sumit Phuyal

#include <stdio.h>

void array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int main() {
    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int numbers[size];  // Variable-length array (VLA)

    array(numbers, size);  // Call the function named 'array'

    printf("Array elements are:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}




