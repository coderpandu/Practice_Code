// if else statement up next:

#include <stdio.h>

int main()
{
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);

    // if (age >= 18) {
    //     printf("You are an adult.\n");
    // } 
    // else if (age >= 13 && age < 18) {
    //     printf("You are a teenager.\n");        
    // } else {
    //     printf("You are a child.\n");
    // }
    // return 0;

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("The number is positive.\n");
        if (num % 2 == 0){
            printf("The number is even.\n");
        }
        else{
            printf("The number is odd.\n");
        }
    }
    else{
        printf("The number is negative.\n");
    }
    return 0;
    
}