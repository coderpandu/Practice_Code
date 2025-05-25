#include <stdio.h>
int main()
{
    int choice, a, b, sum, diff, mul, div;
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        sum = a + b;
        printf(" sum of %d and %d is %d", a, b, sum);
        break;
    case 2:
        diff = a - b;
        printf(" Difference of %d and %d is %d", a, b, diff);
        break;
    case 3:
        mul = a * b;
        printf(" Multiplication of %d and %d is %d", a, b, mul);
        break;
    case 4:
        div = a / b;
        printf("Division of %d and %d is %d", a, b, div);
        break;
    default:
        printf("wrong choice");
    }
    return 0;
}