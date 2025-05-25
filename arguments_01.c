#include <stdio.h>
#include <math.h>

void area_of_square();
void area_of_circle();
void area_of_rectangle();

int main()
{
    int choice;
    printf("Choose a shape to calculate area:\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        area_of_square();
        break;
    case 2:
        area_of_circle();
        break;
    case 3:
        area_of_rectangle();
        break;
    default:
        printf("Invalid choice!\n");
    }
    return 0;
}

void area_of_square()
{
    int side;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    printf("Area of square: %d\n", (int)pow(side, 2));
}

void area_of_circle()
{
    float radius;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of circle: %.2f\n", pi * pow(radius, 2));
}

void area_of_rectangle()
{
    int l, b;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d", &l, &b);
    printf("Area of rectangle: %d\n", l * b);
}


