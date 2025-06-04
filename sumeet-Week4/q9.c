// 9. Write a program to implement any five math functions.
// Sumit Phuyal

#include <stdio.h>
#include <math.h> // Required for math functions

int main()
{
    float b = 2.5, c = -7.8;
    int a = 16;

    // 1. Square root
    printf("Square root of %d = %d\n", a, (int)sqrt(a));

    // 2. Power
    printf("%.2f raised to the power 3 = %.2f\n", b, (float)pow(b, 3));

    // 3. Absolute value
    printf("Absolute value of %.2f = %.2f\n", c, (float)fabs(c));

    // 4. Ceiling (round up)
    printf("Ceiling of %.2f = %.2f\n", b, (float)ceil(b));

    // 5. Floor (round down)
    printf("Floor of %.2f = %.2f\n", b, (float)floor(b));

    return 0;
}
