//Sumit Phuyal
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum: %d\n", sum);

    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    printf("Address of sum: %p\n", &sum);

    a = 15;
    printf("Updated value of a is %d and address is %p\n", a, &a);
    sum = a + b;
    printf("Updated sum: %d\n", sum);
    return 0;
}











