// #include <stdio.h>

// int main() {
//     int a = 5, b = 3;

//     printf("a & b = %d\n", a & b);
//     printf("a | b = %d\n", a | b);
//     printf("a ^ b = %d\n", a ^ b);
//     printf("~a = %d\n", ~a);
//     printf("a << 1 = %d\n", a << 1);
//     printf("a >> 1 = %d\n", a >> 1);

//     return 0;
// }

// // #include <stdio.h>
// // #include <math.h>

// // int main() {
// //     float principal, rate, time, SI, CI;    
// //     printf("Enter principal: ");
// //     scanf("%f", &principal);

// //     printf("Enter rate: ");
// //     scanf("%f", &rate);

// //     printf("Enter time: ");
// //     scanf("%f", &time);

// //     SI = (principal * rate * time) / 100;
// //     printf("Simple Interest: %f\n", SI);

// //     CI = principal * pow(1 + rate / 100, time) - principal;
// //     printf("Compound Interest: %f\n", CI);
// //     return 0;
// // }



#include <stdio.h>
#include <string.h>

int main() {
    char input[10];

    printf("Enter your name: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from fgets
    input[strcspn(input, "\n")] = 0;

    if (strcmp(input, "phuyal") == 0) {
        printf("Welcome, phuyal!\n");
    } else {
        printf("Hello, %s!\n", input);
    }

    return 0;
}



