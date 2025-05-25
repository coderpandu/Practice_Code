#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int lastdigit = a % 10;
    printf("Last digit of %d is %d\n", a, lastdigit);

    int firstdigit = a / 1000; // Assuming a is a 4-digit number
    printf("First digit of %d is %d\n", a, firstdigit);

    int sum = firstdigit + lastdigit;
    printf("Sum of first and last digit is %d\n", sum);

    return 0;
    

}