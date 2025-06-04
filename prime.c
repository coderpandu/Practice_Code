/* // No arguments, no return value
#include <stdio.h>
void checkEvenOdd();
int main() {
    checkEvenOdd();
    return 0;
}
void checkEvenOdd() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("It is Even\n");
    else
        printf("It is Odd\n");
}
 */
/* // With arguments, no return value
#include <stdio.h>

void checkEvenOdd(int num);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    checkEvenOdd(number);
    return 0;
}

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("It is Even\n");
    else
        printf("It is Odd\n");
} */

/* // No arguments, but with return type.
#include <stdio.h>

int getNumber();

int main() {
    int num = getNumber();

    if (num % 2 == 0)
        printf("It is Even\n");
    else
        printf("It is Odd\n");

    return 0;
}

int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
 */
/*
// With arguments, returns a value
#include <stdio.h>

int isEven(int num);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number))
        printf("It is Even\n");
    else
        printf("It is Odd\n");

    return 0;
}

int isEven(int num) {
    return num % 2 == 0;  // returns 1 if even, 0 if odd
}
*/
//Normal Wala 
/* 
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
 */
//Function Wala
#include <stdio.h>

// Function to print all prime numbers up to n
void printPrimesUpTo(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printPrimesUpTo(n);

    return 0;
}

void printPrimesUpTo(int n) {
    printf("Prime numbers up to %d are:\n", n);
    for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}