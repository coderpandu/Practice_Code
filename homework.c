#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}


// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     if (a > b)
//         printf("%d is the largest.\n", a);
//     else
//         printf("%d is the largest.\n", b);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//         printf("%d is even.\n", num);
//     else
//         printf("%d is odd.\n", num);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int age;
//     printf("Enter age: ");
//     scanf("%d", &age);

//     if (age >= 18)
//         printf("Eligible to vote.\n");
//     else
//         printf("Not eligible to vote.\n");

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a >= b && a >= c)
//         printf("%d is the largest.\n", a);
//     else if (b >= a && b >= c)
//         printf("%d is the largest.\n", b);
//     else
//         printf("%d is the largest.\n", c);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     float costPrice, sellingPrice;
//     printf("Enter Cost Price: ");
//     scanf("%f", &costPrice);
//     printf("Enter Selling Price: ");
//     scanf("%f", &sellingPrice);

//     if (sellingPrice > costPrice)
//         printf("Profit = %.2f\n", sellingPrice - costPrice);
//     else if (costPrice > sellingPrice)
//         printf("Loss = %.2f\n", costPrice - sellingPrice);
//     else
//         printf("No profit, no loss.\n");

//     return 0;
// }
