// 9. Write a program to demonstrate passing a structure as a function argument. 
// Sumit Phuyal

#include <stdio.h>

// Define the structure
struct Rectangle {
    float length;
    float width;
};

// Function to calculate the area of the rectangle
float calculateArea(struct Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    struct Rectangle rect;

    // Input length and width of the rectangle
    printf("Enter length of the rectangle: ");
    scanf("%f", &rect.length);
    
    printf("Enter width of the rectangle: ");
    scanf("%f", &rect.width);

    // Calculate the area by passing the structure to the function
    float area = calculateArea(rect);

    // Display the area
    printf("Area of the rectangle: %.2f\n", area);

    return 0;
}


// This program defines a structure named `Rectangle` to represent a rectangle with length and width.
// It includes a function `calculateArea` that takes a `Rectangle` structure as an argument and returns the area of the rectangle.
// In the `main` function, it prompts the user to input the length and width of
// the rectangle, calculates the area by passing the structure to the `calculateArea` function,
// and then displays the calculated area to the user.
// The program uses the `scanf` function to read the user's input and the `printf` function to display the output.