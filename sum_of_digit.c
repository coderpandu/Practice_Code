#include <stdio.h>

int sum_of_digits (int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = sum_of_digits(num);
    printf("Sum of digits of %d is %d\n", num, sum);
    return 0;
}

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10;       // Remove the last digit
    }
    return sum;
}