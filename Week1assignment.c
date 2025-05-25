/*
Write a program that converts integer Fahrenheit temperatures 
from 0 to 212 degrees to floating-point Celsius temperatures
with 3 digits of precision. Perform the calculation 
using the formula Celsius = 5.0 / 9.0 * (Fahrenheit - 32); 
Display the output in two right-aligned columns of 10 characters each. 
Precede the Celsius temperatures with a sign for both positive and
negative values.

*/

#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;
    
    for (fahrenheit = 0; fahrenheit <= 212; fahrenheit++) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%10d%+10.3f\n", fahrenheit, celsius);
    }
    return 0;
}








