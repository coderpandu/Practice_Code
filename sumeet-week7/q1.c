// 1. Write a program to create, declare, and initialize a structure.
// Sumit Phuyal

#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // Declare and initialize a structure variable
    struct Student student1;

    // Initialize the structure members
    strcpy(student1.name, "sumit phuyal");
    student1.age = 20;
    student1.grade = 4.0;

    // Print the structure members
    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
    printf("Student Grade: %.2f\n", student1.grade);

    return 0;
}

// This program defines a structure named `Student` with three members: `name`, `age`, and `grade`. 
// It then declares a variable of type `Student`, initializes its members, and prints the values to the console. 
