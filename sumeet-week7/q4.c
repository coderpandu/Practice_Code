// 4. Write a program to implement a structure inside another structure as a member. 
// Sumit Phuyal

#include <stdio.h>
#include <string.h>

// Define the Address structure
struct Address {
    char street[100];
    char city[50];
    char state[50];
    int zipCode;
};

// Define the Student structure
struct Student {
    char name[50];
    int age;
    struct Address address; // Structure as a member
};

int main() {
    struct Student student;

    // Input student information
    printf("Enter student name: ");
    scanf(" %[^\n]", student.name); // Read string with spaces

    printf("Enter student age: ");
    scanf("%d", &student.age);

    // Input address information
    printf("Enter street: ");
    scanf(" %[^\n]", student.address.street);
    
    printf("Enter city: ");
    scanf(" %[^\n]", student.address.city);
    
    printf("Enter state: ");
    scanf(" %[^\n]", student.address.state);
    
    printf("Enter zip code: ");
    scanf("%d", &student.address.zipCode);

    // Display student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Address: %s, %s, %s - %d\n", 
           student.address.street, 
           student.address.city, 
           student.address.state, 
           student.address.zipCode);

    return 0;
}

// This program defines two structures: `Address` and `Student`.
// The `Address` structure holds address details, while the `Student` structure includes a member of type `Address` to represent the student's address.
// The `main` function demonstrates how to create a `Student` object, input its details, and display the student's information, including their address.
// The program uses formatted input and output to handle strings with spaces and display the information clearly.
// The output will show the student's name, age, and full address in a structured format.
// This approach allows for better organization of related data, making it easier to manage and understand the information associated with each student.
// The program prompts the user to input the student's name, age, and address details, and then displays all the information in a clear format.
// The use of structures within structures allows for a more organized representation of complex data types, such as a student's address within their profile.