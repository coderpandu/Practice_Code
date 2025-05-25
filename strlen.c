#include<stdio.h>
#include<string.h>

int main(){
    char a[10], b[10], c[10];
    int x, y, z;
    printf("Enter three strings: ");
    scanf("%s%s%s",a, b, c);
    x = strlen(a);
    y = strlen(b);
    z = strlen(c);
    if (x>y && x>z){
        printf("%s is the longest string\n", a);
    }
    else if (y>x && y>z){
        printf("%s is the longest string\n", b);
    }
    else{
        printf("%s is the longest string with %d length\n", c, z);
    }
    return 0;

}