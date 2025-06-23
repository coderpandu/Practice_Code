// 7. Write a program to declare, initialize a Union. 
// Sumit Phuyal

#include <stdio.h>

// Define the union
union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Declare and initialize the union
    union Data data;

    // Initialize with an integer value
    data.intValue = 10;
    printf("Data as Integer: %d\n", data.intValue);

    // Initialize with a float value
    data.floatValue = 15.5;
    printf("Data as Float: %.2f\n", data.floatValue);

    // Initialize with a character value
    data.charValue = 'A';
    printf("Data as Character: %c\n", data.charValue);

    // Note: Only the last initialized value is valid
    printf("After initializing charValue, intValue: %d\n", data.intValue);
    printf("After initializing charValue, floatValue: %.2f\n", data.floatValue);

    return 0;
}


// This program defines a union named `Data` that can hold an integer, a float, or a character.
// It demonstrates how to declare and initialize the union, showing the values stored in it after each assignment.
// The program also highlights that only the last initialized value is valid, as unions share the same memory space for all members.
// The program prints the values of the union members after each assignment, demonstrating how unions work in C.
// The output of the program will be the values of the union members after each assignment, showing how the last assignment affects the values of the other members due to the shared memory space.
// The program initializes the union with an integer, a float, and a character, displaying the values after each assignment.
// The final output will show the last initialized value, as unions can only hold one value at a time.