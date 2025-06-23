// 3. Write a program to add two distances in feet and inches using a structure. 
// Sumit Phuyal

#include <stdio.h>

// Define the structure to represent distance
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    
    // Add the feet and inches
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // Convert inches to feet if inches are 12 or more
    if (result.inches >= 12) {
        result.feet += result.inches / 12; // Convert excess inches to feet
        result.inches = result.inches % 12; // Keep the remainder as inches
    }

    return result;
}

int main() {
    struct Distance d1, d2, sum;

    // Input first distance
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    // Input second distance
    printf("Enter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    // Add the two distances
    sum = addDistances(d1, d2);

    // Display the result
    printf("Sum of distances: %d feet and %d inches\n", sum.feet, sum.inches);

    return 0;
}


// This program defines a structure named `Distance` to represent distances in feet and inches.
// It includes a function `addDistances` that takes two `Distance` structures, adds them, and returns the result.
// The `main` function demonstrates how to use this function to add two distances and display the result to the user.
// The program handles the conversion of inches to feet if the total inches exceed 12, ensuring accurate results.
// The program prompts the user to input two distances and then calculates and displays their sum in a formatted manner.
// The output will show the total distance in feet and inches after the addition.
