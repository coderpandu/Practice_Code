/* #include <stdio.h>

void calculatePrice (float value);

int main(){
    float value = 1000.0;
    calculatePrice(value);
    printf("The value in main is: %.2f\n", value);
    return 0;
}

void calculatePrice (float value){
    float tax = 0.13; // 13% tax
    float total = value + (value * tax);
    printf("Total price is: %.2f\n", total);
}
 */


#include <stdio.h>
#include <math.h>

int square (int a);
int main(){
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = square (a);
    printf("Square of %d is: %d\n", a, b);
    return 0;

}

int square (int a){
    return pow(a, 2);
}
