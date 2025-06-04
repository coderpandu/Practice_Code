// 2. Write a program to perform the addition of all elements in an array
// Sumit Phuyal

#include <stdio.h>

int main(){
    int elements[5], i,sum = 0;
    printf("Enter any 5 integer elements: ");
    for (i = 0; i < 5; i++){
        scanf("%d", &elements[i]);
    }

    for (i = 0; i < 5; i++){
        sum += elements[i];
    }
    printf("The sum of all elements is %d\n", sum);

    return 0;

}





