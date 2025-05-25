#include<stdio.h>

int main() {
    int a, b, c, sum;
    float average;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    sum = a + b + c;
    average = sum / 3.0;  // Use 3.0 to get a float result

    printf("Sum of three numbers is: %d\n", sum);
    printf("Average of three numbers is: %.2f\n", average);

    return 0;
}