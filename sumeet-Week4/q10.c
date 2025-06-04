/* 10. Write a program to demonstrate calling one user-defined 
function from another user-defined function.*/
// Sumit Phuyal

#include <stdio.h>

// Function to display a welcome message
void showMessage() {
    printf("Hello! This message is from showMessage().\n");
}

// Function that calls another function
void callAnotherFunction() {
    printf("Inside callAnotherFunction(). Now calling showMessage()...\n");
    showMessage();  // Calling another user-defined function
}

int main() {
    callAnotherFunction();  // Start by calling this one
    return 0;
}
