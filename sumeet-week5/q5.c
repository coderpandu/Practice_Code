// 5. Write a program to delete an element from a specified location in the array.
// Sumit Phuyal

#include <stdio.h>

int main() {
    int arr[100], n, pos, i; // pos refers to the position to delete

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete (0-based index)
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // Check for valid position
    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for(i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;  // Decrease array size

        // Print updated array
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}




