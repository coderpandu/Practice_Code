// 8. Write a program to demonstrate structure with a pointer. 
// Sumit Phuyal

#include <stdio.h>
#include <string.h>

// Define the structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a structure variable
    struct Person person;

    // Declare a pointer to the structure
    struct Person *ptr = &person;

    // Input data using the pointer
    printf("Enter name: ");
    scanf(" %[^\n]", ptr->name); // Read string with spaces

    printf("Enter age: ");
    scanf("%d", &ptr->age);

    // Display data using the pointer
    printf("\nPerson Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    // Modify data using the pointer
    strcpy(ptr->name, "Mr. Don");
    ptr->age = 30;

    // Display modified data
    printf("\nModified Person Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    return 0;
}


