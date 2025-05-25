#include<stdio.h>
#include<math.h> // Include math.h for pow function

int main()
{
    int l;
    printf("Enter the length of the side of the square: ");
    scanf("%d", &l);

    int area = pow(l, 2); // Calculate the area of the square
    // int area = l * l; // Calculate the area of the square
    printf("Area of the square is: %d\n", area);
    return 0;
}