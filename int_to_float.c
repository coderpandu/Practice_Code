#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;

    // Loop through Fahrenheit values from 0 to 212
    for (fahrenheit = 0; fahrenheit <= 212; fahrenheit++) {
        // Convert Fahrenheit to Celsius
        celsius = 5.0 / 9.0 * (fahrenheit - 32);

        // Print Fahrenheit and Celsius values in two right-aligned columns
        // %10d -> right-align integer in 10 spaces
        // %+10.3f -> right-align float with 3 decimal places and always show the sign (+/-)
        printf("%10d%+10.3f\n", fahrenheit, celsius);
    }

    return 0;
}

/* here is the detailed explanation of the code:
    * This program converts Fahrenheit temperatures to Celsius and prints the results in a formatted table.
    * The Fahrenheit values range from 0 to 212, and the Celsius values are calculated using the formula:
    * Celsius = 5.0 / 9.0 * (Fahrenheit - 32)
    * The output is formatted with two right-aligned columns: one for Fahrenheit and one for Celsius.
    * 
    * #include <stdio.h>
    * int main() {
    *    int fahrenheit;    
    *    float celsius;
    *
    * for (fahrenheit = 0; fahrenheit <= 212; fahrenheit++) {
    *       celsius = 5.0 / 9.0 * (fahrenheit - 32);
    *       printf("%10d%+10.3f\n", fahrenheit, celsius);
    *   }
    *  return 0;
    * }
    * */

