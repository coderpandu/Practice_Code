// 2. Write a program to compare two strings using a pointer.
// Sumit Phuyal

#include <stdio.h>

// Function to compare two strings
int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; // Strings are not equal
        }
        str1++; // Move to the next character in str1
        str2++; // Move to the next character in str2
    }
    // Check if both strings have reached the end
    return (*str1 == *str2); // Return 1 if both are at the end, otherwise 0
}

int main() {
    char str1[100], str2[100]; // Arrays to hold the input strings

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Compare the strings
    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}



// This program defines a function `compareStrings` that takes two string pointers as arguments and compares them character by character.
// The main function collects input from the user for two strings, calls `compareStrings`, and then prints whether the strings are equal or not.
// The use of pointers allows for efficient traversal of the strings without needing to use array indexing.
