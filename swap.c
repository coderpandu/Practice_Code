// Function to swap two numbers (call by value)
#include <stdio.h>
void swap(int *x, int *y);
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside swap function :  x = %d, y = %d\n", *x, *y);
}
int main()
{
    int a = 40, b = 50;

    printf("Before swap : a = %d, b = %d\n", a, b);
    swap(&a, &b); // Here, it Pass copies of a and b
    printf("After swap : a = %d, b = %d\n", a, b);
    return 0;
}