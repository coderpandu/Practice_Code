#include <stdio.h>

void calculate(int a, int b, int *sum, int *product, float *average);

int main() {
    int sum, product;
    float avg;
    calculate(10, 20, &sum, &product, &avg);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %f\n", avg);
    return 0;
}

void calculate(int a, int b, int *sum, int *product, float *average) {
    *sum = a + b;
    *product = a * b;
    *average = *sum / 2.0;
}