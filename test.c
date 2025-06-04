/* #include <stdio.h>

int main() {
    int a, b, c, sum;
    float average;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    sum = a + b + c;
    average = sum / 3.0;  // Use 3.0 to get a float result

    printf("Sum of three numbers is: %d\n", sum);
    printf("Average of three numbers is: %.2f\n", average);

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    average = sum / 3.0;  // Use 3.0 to get a float result
    printf("Sum of three numbers is: %d\n", sum);
    printf("Average of three numbers is: %f\n", average);

    int x = 2;

    if (x = 1){
        printf("x is equal to 1\n");
    }

    else{
        printf("x is not equal to 1\n");
    }
    return 0;
    int n;
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n%2 !=0){
            break;
        }
    }while(1);
    printf("thankyou\n");

    int i;
    do{
        printf("Enter a number: ");
        scanf("%d", &i);
        if (i%7 == 0){
            break;
        }
    }while(1);
    printf("thankyou\n");
    return 0;


}
 */

#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int isNatural(int n)
{
    return (n > 0); // Natural numbers are positive integers
}

int isArmstrong(int n)
{
    int originalNum = n, digits = 0, result = 0, temp = n;

    // Count digits
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }

    temp = n;
    while (temp != 0)
    {
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

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    if (isArmstrong(n))
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }

    if (isNatural(n))
    {
        printf("%d is a natural number.\n", n);
    }
    else
    {
        printf("%d is not a natural number.\n", n);
    }

    return 0;
}