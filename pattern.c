/*
*****
****
***
**
*
print this pattern using nested for loop
*/

/* #include <stdio.h>
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
} */

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 6; i++) {
        // Print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        if (i == 1)
            for (j = 1; j <= 10; j++)
                printf("*");
        else if (i == 2)
            for (j = 1; j <= 8; j++)
                printf("*");
        else if (i == 3)
            for (j = 1; j <= 6; j++)
                printf("*");
        else if (i == 4)
            for (j = 1; j <= 5; j++)
                printf("*");
        else if (i == 5)
            for (j = 1; j <= 2; j++)
                printf("*");
        else if (i == 6)
            for (j = 1; j <= 1; j++)
                printf("*");

        printf("\n");
    }

    return 0;
}