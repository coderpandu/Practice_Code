#include<stdio.h>

int main()
{
    float r;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    float area = pi * r * r;
    printf("%.3f", area);
    return 0;
}