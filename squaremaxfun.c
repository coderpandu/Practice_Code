#include <stdio.h>

int max(int, int); // Function prototype
// Function to find the maximum of two numbers
int main() {
    int num1, num2, result;
    printf("Enter two numbers: "); //taking input from user
    scanf("%d%d", &num1, &num2);
    result = max(num1, num2); // Calling the function to find maximum
    printf("Maximum of %d and %d is %d\n", num1, num2, result);
    return 0;
}
// This function takes two integers and returns the maximum
int max(int a, int b) { // function definition
    return (a > b) ? a : b; // Using ternary operator to find maximum
}





















/* #include <stdio.h>

int square(int x); // Function prototype
// Function to calculate the square of a number
int main() {
    int num, result;
    printf("Enter a number: "); //taking input from user
    scanf("%d", &num);
    result = square(num); // Calling the function to calculate square
    printf("Square of %d is %d\n", num, result);
    return 0;
}
// This function takes an integer x and returns its square
int square(int x) { // function definition
    return x * x;
} */

