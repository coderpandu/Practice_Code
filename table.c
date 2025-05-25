#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n , i, n * i);
    }
    
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    for (int i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", x , i, x * i);
    }
    return 0;
}

