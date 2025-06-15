// 7. Write a program to find the biggest among three numbers using a pointer.
// Sumit Phuyal

#include <stdio.h>

void findLargest(int *a, int *b, int *c, int **largest) {
    if (*a >= *b && *a >= *c) {
        *largest = a; // Point to a
    } else if (*b >= *a && *b >= *c) {
        *largest = b; // Point to b
    } else {
        *largest = c; // Point to c
    }
}

int main() {
    int num1, num2, num3;
    int *largest;

    // Input three numbers
    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    // Find the largest number
    findLargest(&num1, &num2, &num3, &largest);

    // Print the largest number
    printf("The largest number is: %d\n", *largest);

    return 0;
}

// This program defines a function `findLargest` that takes pointers to three integers and a pointer to a pointer, which will point to the largest number among the three. 
// The main function collects input from the user, calls `findLargest`, and then prints the largest number. 
// The use of pointers allows us to manipulate the addresses of the variables directly.