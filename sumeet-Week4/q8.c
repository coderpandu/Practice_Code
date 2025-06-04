// 8. Write a program to implement any five string functions.
// Sumit Phuyal

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Custom strlwr function
void strlwr_custom(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// Custom strupr function
void strupr_custom(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char copied[50];

    // strlen
    printf("Length of str1: %lu\n", strlen(str1));

    // strcpy
    strcpy(copied, str1);
    printf("Copied string: %s\n", copied);

    // strcat
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // strlwr (custom)
    strlwr_custom(str1);
    printf("Lowercase: %s\n", str1);

    // strupr (custom)
    strupr_custom(str2);
    printf("Uppercase: %s\n", str2);

    // strcmp
    if (strcmp(str1, str2) == 0)
        printf("str1 and str2 are equal.\n");
    else
        printf("str1 and str2 are not equal.\n");

    return 0;
}

