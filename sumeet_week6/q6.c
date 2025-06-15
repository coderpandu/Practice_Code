// 6. Write a program to use pointers as arguments in a function.
// Sumit Phuyal

#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Store the value at address a in temp
    *a = *b;   // Assign the value at address b to address a
    *b = temp; // Assign the value in temp to address b
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers:\n");
    printf("Integer 1: ");
    scanf("%d", &num1);
    printf("Integer 2: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(&num1, &num2);

    // Display values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}



// This program defines a function `swap` that takes pointers to two integers and swaps their values.
// The main function collects input from the user, calls `swap`, and then prints the values before and after swapping.
// The use of pointers allows us to manipulate the values of the variables directly without returning them from the function.
// The program demonstrates how to use pointers as arguments in a function to modify the values of variables.
