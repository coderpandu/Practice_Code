/*Write a program to swap two integeres using call by value
and call by reference methods of passing arguments to a function.*/
// Sumit Phuyal

#include <stdio.h>

void swapByValue (int a, int b); //function declaration
void swapByReference (int *a, int *b); //function declaration

int main(){
    int x = 10, y = 20;
    printf("Original value of x = %d and y = %d\n", x, y); //original value of x and y

    swapByValue(x, y); //function calling
    printf("After Swapping with call by value: x = %d, and y = %d\n",x, y); //value wont be changed

    swapByReference(&x, &y); //function calling
    printf("After Swapping with call by reference: x = %d, and y = %d\n",x, y); //valu will be changed
    return 0;
}

void swapByValue (int a, int b){ //function definition
    int temp = a; //temp is a third variable
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d and b = %d\n", a, b);
}

void swapByReference (int *a, int *b){ //function definition
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: a = %d and b = %d\n", *a, *b);
}