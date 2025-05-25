#include<stdio.h>

int main()
{
    float p, r, t;
    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time in years: ");
    scanf("%f", &t);

    float si = (p * r * t) / 100;
    printf("Simple Interest: %.2f", si);

    return 0;
}