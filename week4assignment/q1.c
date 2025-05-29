// write a program to calculate the factorial of a number using recursion
//Sumit Phuyal

#include <stdio.h>

int factorial(int n); // function declaration

int main(){
    int num, result;
    printf("Enter a number: "); // taking input from the users
    scanf("%d", &num);

    if (num < 0){
        printf("Factorial of negative number is not defined\n"); 
    }else{
        result = factorial(num); // function calling
        printf("The factorial of %d is %d\n", num, result);
    }
    return 0;
}

int factorial(int n){ // function definition
    if (n==0 || n==1){
        return 1;
    }else{
        return n * factorial(n-1); // using recursion
    }
}
