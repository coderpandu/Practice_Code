#include<stdio.h>
#include<string.h>

int main()
{
    // char name[5];
    // printf("Enter your name: ");
    // gets(name); // Read a string from standard input]
    // // printf("%s\n", name); // Print the string
    // puts(name); // Print the string with a newline
    // return 0;

    char name[6];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Safe alternative to gets()
    puts(name);

}