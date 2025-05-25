#include<stdio.h>

int main(){
    // int i=0;
    // while(i <= 10){
    //     printf("%d\n", i);
    //     i++;
    // }
    // return 0;

    int i;
    int a = 0;
    printf("Enter a number: ");
    scanf("%d", &i);
    while(a <= i){
        printf("%d\n", a);
        a++;
    }
    return 0;
}