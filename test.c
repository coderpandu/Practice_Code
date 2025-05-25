#include <stdio.h>

int main() {
    // int a, b, c, sum;
    // float average;

    // printf("Enter first number: ");
    // scanf("%d", &a);

    // printf("Enter second number: ");
    // scanf("%d", &b);

    // printf("Enter third number: ");
    // scanf("%d", &c);

    // sum = a + b + c;
    // average = sum / 3.0;  // Use 3.0 to get a float result

    // printf("Sum of three numbers is: %d\n", sum);
    // printf("Average of three numbers is: %.2f\n", average);

    // printf("Enter three numbers: ");
    // scanf("%d %d %d", &a, &b, &c);
    // sum = a + b + c;
    // average = sum / 3.0;  // Use 3.0 to get a float result 
    // printf("Sum of three numbers is: %d\n", sum);
    // printf("Average of three numbers is: %f\n", average);

    // int x = 2;

    // if (x = 1){
    //     printf("x is equal to 1\n");
    // }
    
    // else{
    //     printf("x is not equal to 1\n");
    // }
    // return 0;
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
