#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int C[3][3] = {0}; // Result matrix

    // Multiply A x B and store result in C
    for (int i = 0; i < 3; i++) {         // Rows of A
        for (int j = 0; j < 3; j++) {     // Columns of B
            for (int k = 0; k < 3; k++) { // Columns of A / Rows of B
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
 
    // Display the result
    printf("Result of A x B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
