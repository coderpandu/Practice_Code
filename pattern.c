/*
*****
****
***
**
*
print this pattern using nested for loop
*/

#include <stdio.h>
int main(){
    int i, j;
    for (i = 10; i >= 1; i= i-2){
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("*\n");
    return 0;
}

