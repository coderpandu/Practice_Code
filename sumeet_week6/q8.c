// 8. Write a program to count vowels and consonants in a string using a pointer. 
// Sumit Phuyal

#include <stdio.h>
#include <ctype.h> // For tolower function

int main() {
    char str[100]; // Array to hold the input string
    char *ptr = str; // Pointer to the string
    int vowels = 0, consonants = 0; // Counters for vowels and consonants

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string including spaces

    // Iterate through the string using the pointer
    while (*ptr != '\0' && *ptr != '\n') { // Check for end of string or newline
        char ch = tolower(*ptr); // Convert to lowercase for uniformity
        if (ch >= 'a' && ch <= 'z') { // Check if the character is an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++; // Increment vowel count
            } else {
                consonants++; // Increment consonant count
            }
        }
        ptr++; // Move to the next character
    }

    // Display the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}


// This program counts the number of vowels and consonants in a string using a pointer.
// It reads a string from the user, iterates through each character using a pointer,
// and checks if the character is a vowel or consonant. The results are displayed at the end.
// The use of pointers allows for efficient traversal of the string without needing to use array indexing.
