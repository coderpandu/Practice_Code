#include<stdio.h>

int main(){
    // for (int n = 0; n<=20; n++){
    //     if (n == 3){
    //         continue;
    //     }
    //     printf("%d\n", n);
    // }
    // return 0;

    for (int i = 5; i<=50; i++){
        if (i%2 == 0){
            continue;
        }
        printf("%d\n", i);
    }
    return 0; 
}