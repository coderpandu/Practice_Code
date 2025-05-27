/* #include <stdio.h>
#include <math.h>

float squareroot (float num);

int main(){
    float num, squarert;
    printf("Enter a number: ");
    scanf("%f", &num);
    squarert = squareroot(num);    
    printf("Square root is %f\n", squarert);
    return 0;
}

float squareroot(float n) {
    if (n < 0) {
        printf("Error: Cannot compute square root of a negative number.\n");
        return -1; // Return an error value
    }
    return sqrt(n);
} */


#include <stdio.h>
#include <math.h>

void squareroot(); // Add semicolon here

int main() {
    squareroot();
    return 0;
}

void squareroot() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num < 0) {
        printf("Error: Cannot compute square root of a negative number.\n");
    } else {
        printf("Square root is %f\n", sqrt(num));
    }
}