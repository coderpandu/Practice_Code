// 10. Write a program to demonstrate structure with a pointer using a user-defined function.
// Sumit Phuyal

#include <stdio.h>
#include <string.h>

// Define the structure
struct Book {
    char title[100];
    char author[100];
};

// Function to input book details using a pointer
void inputBookDetails(struct Book *bookPtr) {
    printf("Enter book title: ");
    scanf(" %[^\n]", bookPtr->title); // Read string with spaces

    printf("Enter book author: ");
    scanf(" %[^\n]", bookPtr->author); // Read string with spaces
}

// Function to display book details using a pointer
void displayBookDetails(struct Book *bookPtr) {
    printf("\nBook Details:\n");
    printf("Title: %s\n", bookPtr->title);
    printf("Author: %s\n", bookPtr->author);
}

int main() {
    struct Book myBook;

    // Input book details
    inputBookDetails(&myBook);

    // Display book details
    displayBookDetails(&myBook);

    return 0;
}

// This program defines a structure named `Book` to hold information about a book, including its title and author.
// It includes two functions: `inputBookDetails` to input the book details using a pointer to the structure,
// and `displayBookDetails` to display the book details using a pointer.
// In the `main` function, it creates a `Book` structure variable, calls the input function to get the book details,
// and then calls the display function to show the entered book details.
// The program uses the `scanf` function to read user input and the `printf` function to display the output.
// The use of pointers allows the functions to directly modify the structure passed to them, demonstrating how structures can be manipulated using pointers in C.
