#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3, y = 4;
    swap(x, y); // This will cause an infinite recursion
    printf("x: %d, y: %d\n", x, y);

    _swap(&x, &y); // This will correctly swap the values of x and y
    printf("x: %d, y: %d\n", x, y);
    return 0;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %d, b = %d\n", a, b);
}

void _swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap: a = %d, b = %d\n", *a, *b);
}