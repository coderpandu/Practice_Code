/* 7. Write a program to check whether a number is prime, Armstrong,
or a natural number using a function.*/
// Sumit Phuyal

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; // Number is prime
}

int isNatural(int n) {
    return (n > 0); // Natural numbers are positive integers
}

int isArmstrong(int n) {
    int originalNum = n, digits = 0, result = 0, temp = n;

    // Count digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        result += power;
        temp /= 10;
    }

    return (result == n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    if (isNatural(n)) {
        printf("%d is a natural number.\n", n);
    } else {
        printf("%d is not a natural number.\n", n);
    }
    return 0;
}

