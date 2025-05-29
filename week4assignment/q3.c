/*Write a program to add, subtract, multiply, and divide two
integers using a user-defined type function with a return type.*/
//Sumit Phuyal

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main(){
    int num1, num2;
    printf("Enter two Numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtract: %d\n", subtract(num1, num2));
    printf("Multiply: %d\n", multiply(num1, num2));
    
    if (num1 == 0 || num2 == 0){
        return 0; // Avoid division by zero
    }else{
        printf("Division: %f\n", divide(num1, num2));
    }
}

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

float divide(int a, int b){
    return (float)a / (float)b;
}