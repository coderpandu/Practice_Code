#include <stdio.h>
int main(){
    int n, r, s=0, x;
    printf("Enter any number: ");
    scanf("%d", &n);
    x = n; // store the original number
    while(n!=0){
        r = n % 10; //r = remainder
        s = s * 10 + r; //s = Reverse Number
        n = n / 10; //n = Entered number
    }
    printf("%d\n", x);
    printf("Reverse of %d is %d\n",x,s);
    if (x == s){
        printf("Therefore the entered number is palindrome.");
    }
    else{
        printf("The entered number is not a palindrome.");
    }
    return 0;
}

