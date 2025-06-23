/* 6. Define a structure “complex” (typedef) to read two complex numbers 
and perform the addition, subtraction of these two complex numbers, and 
display the result.  */
// Sumit Phuyal

#include <stdio.h>

// Define the Complex structure using typedef
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to display a complex number
void displayComplex(Complex c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    }
}

int main() {
    Complex c1, c2, sum, difference;

    // Input first complex number with validation
    printf("Enter first complex number (real and imaginary parts): ");
    if (scanf("%f %f", &c1.real, &c1.imag) != 2) {
        printf("Error: Invalid input for first complex number.\n");
        return 1;
    }

    // Clear input buffer
    while (getchar() != '\n');

    // Input second complex number with validation
    printf("Enter second complex number (real and imaginary parts): ");
    if (scanf("%f %f", &c2.real, &c2.imag) != 2) {
        printf("Error: Invalid input for second complex number.\n");
        return 1;
    }

    // Perform addition and subtraction
    sum = addComplex(c1, c2);
    difference = subtractComplex(c1, c2);

    // Display results
    printf("Sum: ");
    displayComplex(sum);
    
    printf("Difference: ");
    displayComplex(difference);

    return 0;
}

