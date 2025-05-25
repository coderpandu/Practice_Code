//1. Write a C program to display “Hello World”
//Sumit Phuyal

#include <stdio.h>

int main() {
    printf("Hello World\n");
    return 0;
}



/*2. Write a C program to perform addition, subtraction, division, 
and multiplication of two numbers.
*/
//Sumit Phuyal

#include <stdio.h>

int main() {
    float a, b, add, sub, div, mul; 
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    
    add = a + b;
    printf("Addition: %f\n", add);
    
    sub = a - b;
    printf("Subtraction: %f\n", sub);
    
    mul = a * b;
    printf("Multiplication: %f\n", mul);
    
    div = a / b;
    printf("Division: %f\n", div);
    
    return 0;
}



/*3. Write a program to calculate the area and circumference of a circle. 
Input needs to be collected from the user.
*/
//Sumit Phuyal

#include <stdio.h>
//#define PI 3.14159

int main() {
    float radius, area, circumference;
    float pi = 3.14159; 

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area: %f\n", area); 
    printf("Circumference: %f\n", circumference);

    return 0;
}



/*4. Write a program to swap the values of two variables, with and without using a third variable.*/
//Sumit Phuyal

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // With third variable
    c = a;
    a = b;
    b = c;
    printf("After swap with third variable: a = %d, b = %d\n", a, b);

    // Without third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap without third variable: a = %d, b = %d\n", a, b);

    return 0;
}



/*5. Write a program to calculate simple and compound interest.*/
//Sumit Phuyal

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, SI, CI;    
    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    SI = (principal * rate * time) / 100;
    printf("Simple Interest: %f\n", SI);

    CI = principal * pow(1 + rate / 100, time) - principal;
    printf("Compound Interest: %f\n", CI);
    return 0;
}



/*6. Write a program to find the largest of three numbers using ternary operators.*/
//Sumit Phuyal

#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("Largest number is: %d\n", largest);
    return 0;
}



/*7. Write a program to illustrate the use of unary prefix and postfix increment and decrement operators.*/ 
//Sumit Phuyal

#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Original a = %d, b = %d\n", a, b);

    printf("Prefix Increment: %d\n", ++a);
    printf("Postfix Increment: %d\n", b++);
    printf("After Postfix, b = %d\n", b);

    printf("Prefix Decrement: %d\n", --a);
    printf("Postfix Decrement: %d\n", b--);
    printf("After Postfix, b = %d\n", b);

    return 0;
}



/*8. Write a program to implement bitwise operators.*/
//Sumit Phuyal

#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}



/*9. Write a program to calculate the area of a square and a rectangle.*/
//Sumit Phuyal

#include <stdio.h>

int main() {
    float side, length, breadth;

    //for area of square
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("Area of square = %f\n", side * side);
    
    //for area of rectangle    
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    printf("Area of rectangle = %f\n", length * breadth);
    return 0;
}

