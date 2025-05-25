//Check if a number is positive, negative, or zero.

// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num > 0){
//         printf("%d is positive\n", num);
//     }
//     else if (num < 0){
//         printf("%d is negative\n", num);
//     }
//     else{
//         printf("The number is zero\n");
//     }
// }


//Print all even numbers between 1 and 50.

#include<stdio.h>

int main(){
    for (int i = 1; i <= 50; i++){
        if (i % 2 == 0){
            printf("%d ", i);
        }
        else{
            continue;
        }
    }
    return 0;
}
