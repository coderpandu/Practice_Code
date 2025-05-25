#include <stdio.h>
#include <math.h>

int square(int side);
float circle(int radius);
int rectangle(int l, int b);

int main()
{
    int choice, side,l, b;
    float radius;
    printf("Choose a shape to calculate area:\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the side of the square: ");
        scanf("%d", &side);
        printf("Area of square: %d\n", square(side));
        break;
    case 2:
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        printf("Area of circle: %.2f\n", circle(radius));
        break;
    case 3:
        printf("Enter the length and breadth of the rectangle: ");
        scanf("%d%d", &l, &b);
        printf("Area of rectangle: %d\n", rectangle(l, b));
        break;
    default:
        printf("Invalid choice!\n");
    }
    return 0;
}

int square(int side)
{
    return (int)pow(side, 2);
}

float circle(int radius)
{
    float pi = 3.14;
    return pi * pow(radius, 2);
}

int rectangle(int l, int b)
{
    return l * b;
}