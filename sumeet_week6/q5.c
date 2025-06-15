// 5. Write a program to add two 2*2 matrices using a pointer. 
// Sumit Phuyal

#include <stdio.h>

// Function to add two matrices
void addMatrices(int a[2][2], int b[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j]; // Add corresponding elements
        }
    }
}

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input first matrix
    printf("Enter elements of the first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices
    addMatrices(matrix1, matrix2, result);

    // Display the result
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// This program defines a function `addMatrices` that takes two 2x2 matrices and a result matrix as arguments.
// It adds the corresponding elements of the two matrices and stores the result in the result matrix.
// The `main` function demonstrates how to use this function by taking two 2x2 matrices
// as input from the user, adding them using the `addMatrices` function, and displaying
// the resultant matrix. The use of pointers is implicit in the way arrays are passed to functions in C,
// as arrays decay to pointers when passed to functions.
// The program effectively demonstrates how to work with matrices in C using pointers and arrays.
// The matrices are defined as 2D arrays, and the addition is performed element-wise.
// The program is structured to be simple and clear, making it easy to understand how matrix addition works in C.   
