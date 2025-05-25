/* #include <stdio.h>

void sum();;
int main(){
    printf("It is a function with no arguments and no return type\n");
    sum (); 
    return 0;
}
void sum (){
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum is: %d", c);
} */


/* #include <stdio.h>

void sum (int, int);
int main(){
    int a, b;
    printf("It is a function with arguments and no return type\n");
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum (a, b); 
    return 0;
}

void sum (int a,int b){
    int sum;
    sum = a + b;
    printf("Sum is: %d", sum);
} */

#include <stdio.h>
int sum (int, int);
int main(){
    int a, b, add;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    add = sum (a, b);
    printf("Sum is: %d", add);
    return 0;
}

int sum (int a, int b){
    int s;
    s = a + b;
    return s;
}
