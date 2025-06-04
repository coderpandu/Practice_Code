// 5. Calculates the nth Fibonacci number recursively using the function fibonacci.
//Sumit Phuyal

#include <stdio.h>
int fibonacci(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int n) {
    if (n == 0){
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

