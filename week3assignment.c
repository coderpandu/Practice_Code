// /*Debug and analyze the following code and resolve the error*/
// //Sumit Phuyal

/* #include<stdio.h>
int main()
{
int i = 1;
do
 {
 printf("%d\n", i);
 i++;
 }
while(i <= 10);
return 0;
} */

/*2. Write a program to find the largest and smallest among three entered numbers,
and also display whether the identified largest/smallest number is even or odd.*/
// Sumit Phuyal

/* #include <stdio.h>
int main() {
    int a, b, c, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
    smallest = (a < b && a < c) ? a : (b < a && b < c) ? b : c;
    printf("Largest number is: %d\n", largest);
    printf("Smallest number is: %d\n", smallest);
    if (largest % 2 == 0) {
        printf("%d is even.\n", largest);
    } else {
        printf("%d is odd.\n", largest);
    }
    if (smallest % 2 == 0) {
        printf("%d is even.\n", smallest);
    } else {
        printf("%d is odd.\n", smallest);
    }
    return 0;
} */

/* 3. Write a program to check if the entered number is Armstrong or not.*/
// Sumit Phuyal

/* #include <stdio.h>
int main() {
    int num, originalNum, remainder, n = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
} */

/*4. Write a program to find whether an entered character is a consonant or a vowel
using a switch statement.*/
// Sumit Phuyal

#include <stdio.h>
int main(){
    char vowel;
    printf("Enter any letter from a to z: ");
    scanf("%c", &vowel);

    switch(vowel){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':                
            printf("%c is a Vowel Letter\n", vowel);
            break;
        default:
            printf("%c is a Consonatant Letter\n", vowel);
    }
    return 0;
}


/*10. Write a program to compute the grade of students using an if-else ladder.
The grades are assigned as follows:*/
// Sumit Phuyal
/* #include <stdio.h>
int main(){
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 90){
        printf("Hurrey!!! You got A+\n");
    }
    else if (marks < 90 && marks >= 80){
        printf("Congratulation!! You got A\n");
    }
    else if (marks < 80 && marks >= 70){
        printf("You got B\n");
    }
    else if (marks < 70 && marks >= 60){
        printf("You got C\n");
    }
    else if (marks < 60 && marks >= 50){
        printf("You got D\n");
    }
    else if (marks < 50){
        printf("You got F\n");
    }
    else{
        printf("Invalid Number\n");
    }
    return 0;
} */

/*8. Write a program to implement the continue and break statements.*/
// Sumit Phuyal

/* #include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            printf("Skipping number 5 using continue.\n");
            continue;
        }
        if (i == 8)
        {
            printf("Breaking the loop at number 8 using break.\n");
            break;
        }

        printf("Number: %d\n", i);
    }

    printf("The End.\n");

    return 0;
} */

/*7. Write a program to check whether a number is a Palindrome or not.*/
// Sumit Phuyal

/* #include <stdio.h>
int main() {
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }
    return 0;
} */

/*9. Write a program to find the factorial of an entered number.*/
// Sumit Phuyal

/* #include <stdio.h>

int main() {
    int num, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
} */

/*6. Write a program to display the following pattern.
 **********
  ********
   ******
    ****
     **
      *
 */

/* #include <stdio.h>
int main()
{
    int i, j, spaces = 0;
    for (i = 10; i >= 2; i -= 2)
    {
        for (j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        spaces++;
    }
    for (j = 0; j < 2; j++)
    {
        printf(" ");
    }
    printf("   *\n");
    return 0;
} */

/*5. Write a program to display the Fibonacci series.*/
// sumit phuyal

/* #include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
} */
