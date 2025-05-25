#include<stdio.h>

int main() {
    int n, sum = 0,j;

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // int i = 1; // Initialize counter for sum calculation
    // // Calculate the sum of the first n natural numbers
    // do {
    //     sum += i;
    //     i++;
    // } while (i <= n);

    // // Print the sum
    // printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    // // Print the numbers in reverse order
    // printf("The numbers in reverse order are:\n");
    // do {
    //     printf("%d\n", n);
    //     n--;
    // } while (n > 0);

    // return 0;
    j =n;
    for (int i=1; i<=n; i++, j--){
        sum += i;
        printf("%d\n", j);
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}