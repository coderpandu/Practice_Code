#include <stdio.h>

int fact(int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("factorial is %d\n", fact(n));
    return 0;
}

int fact(int n){
    if (n == 1){
        return 1;
    } 
    int factNt1 = fact(n-1);
    int factN = factNt1 * n;
    return factN;
}
