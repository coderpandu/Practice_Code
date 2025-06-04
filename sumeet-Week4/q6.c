// 6. Write a program to implement static and global variables.
// Sumit Phuyal

#include <stdio.h>

// 🔹 Global variable for pi
float pi = 3.1416;

// Function to calculate area of circle
float calculateArea(float radius) {
    return pi * radius * radius;
}

// Function to calculate circumference of circle using static variable
float calculateCircumference(float radius) {
    static int callCount = 0; // 🔸 Static variable
    callCount++;
    printf("Circumference function called %d time(s)\n", callCount);
    return 2 * pi * radius;
}

int main() {
    float radius, area, circumference;

    for (int i = 0; i < 2; i++) {
        printf("\nEnter the radius of the circle: ");
        scanf("%f", &radius);

        area = calculateArea(radius);
        circumference = calculateCircumference(radius);

        printf("Area = %.2f\n", area);
        printf("Circumference = %.2f\n", circumference);
    }

    return 0;
}
