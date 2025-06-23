#include <stdio.h>

void cubeByReference (int *nptr);

int main(){
    int number = 5;

    printf("The original value of number is %d", number);
    cubeByReference(&number);
    printf("\nThe new value of number is %d\n", number);
}
void cubeByReference (int *nptr){
    *nptr = *nptr * *nptr * *nptr;
}





// This program demonstrates how to pass a pointer to a function in C.
// The function `cubeByReference` takes a pointer to an integer, modifies the value at that address,
// and the changes are reflected in the original variable in `main`.
// The output will show the original value of `number` and its new value after being cubed.
// The program uses the `&` operator to pass the address of `number` to the function, allowing the function to modify the original variable directly.S