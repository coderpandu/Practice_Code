#include<stdio.h>
int main(){    
    int a, b, choice;
    float radius, side, length, breadth;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Area of Circle\n");
    printf("6. Area of Square\n");
    printf("7. Area of Rectangle\n");
    printf("8. Exit\n");

    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter two numbers for addition:\n");
            scanf("%d %d", &a, &b);
            printf("Addition: %d\n", a + b);
            break;

        case 2:
            printf("Enter two numbers for subtraction:\n");
            scanf("%d %d", &a, &b);
            printf("Subtraction: %d\n", a - b);
            break;

        case 3:
            printf("Enter two numbers for multiplication:\n");
            scanf("%d %d", &a, &b);
            printf("Multiplication: %d\n", a * b);
            break;

        case 4:
            printf("Enter two numbers for division:\n");
            scanf("%d %d", &a, &b);
            if (b != 0) {
                printf("Division: %f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5:
            printf("Enter radius of circle:\n");
            scanf("%f", &radius);
            printf("Area of Circle: %f\n", 3.14 * radius * radius);
            break;

        case 6:
            printf("Enter side of square:\n");
            scanf("%f", &side);
            printf("Area of Square: %f\n", side * side);
            break;

        case 7:
            printf("Enter length and breadth of rectangle:\n");
            scanf("%f %f", &length, &breadth);
            printf("Area of Rectangle: %f\n", length * breadth);
            break;

        case 8:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
    }
    return 0;
}