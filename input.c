#include<stdio.h>
int main()
{
    // int a, b;
    // printf("Enter a: ");
    // scanf("%d", &a);

    // printf("Enter b: ");
    // scanf("%d", &b);

    // int sum = a + b;
    // printf("Sum of a and b is: %d\n", sum);

    // return 0;

    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    int sum = a + b + c;
    printf("Sum of a, b, and c is: %d\n", sum);

    float average = sum / 3.0;  // Use 3.0 to get a float result
    printf("Average of a, b, and c is: %f\n", average);

    return 0;

}