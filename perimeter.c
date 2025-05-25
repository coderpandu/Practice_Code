#include<stdio.h>
int main()
{
    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    int perimeter = 2 * (length + breadth);
    printf("Perimeter of the rectangle is: %d\n", perimeter);
    return 0;
}