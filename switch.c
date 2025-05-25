// #include<stdio.h>

// int main() {
//     char day;
//     printf("Enter a day of the week (first letter, m/t/w/T/f/s/S): ");
//     scanf(" %c", &day);

//     switch(day) {
//         case 'm':
//             printf("Monday\n");
//             break;
//         case 't':
//             printf("Tuesday\n");
//             break;
//         case 'w':
//             printf("Wednesday\n");
//             break;
//         case 'T':
//             printf("Thursday\n");
//             break;
//         case 'f':
//             printf("Friday\n");
//             break;
//         case 's':
//             printf("Saturday\n");
//             break;
//         case 'S':
//             printf("Sunday\n");
//             break;
//         default:
//             printf("Invalid input! Please enter one of: m, t, w, T, f, s, S.\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    char grade;
    printf("Enter your grade (A, B, C, D, F): ");   
    scanf(" %c", &grade);
    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
    case 'C':
        printf("Well done\n");
        break;
    case 'D':
        printf("You passed\n");
        break;
    case 'F':
        printf("Better try again\n");
        break;
    default:
        printf("Invalid grade\n");
    }
    printf("Your grade is  %c\n", grade);
    return 0;
}