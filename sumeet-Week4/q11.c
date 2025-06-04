/* 11. Write a program to get student details and display 
them using an individual user-defined function.*/
// Sumit Phuyal

#include <stdio.h>

// User-defined function to get student details
void getStudentDetails(char name[], int *age, float *marks) {
    printf("Enter student name: ");
    scanf(" %[^\n]", name);  // Read string with spaces

    printf("Enter student age: ");
    scanf("%d", age);

    printf("Enter student marks: ");
    scanf("%f", marks);
}

// User-defined function to display student details
void displayStudentDetails(char name[], int age, float marks) {
    printf("\n--- Student Details ---\n");
    printf("Name : %s\n", name);
    printf("Age  : %d\n", age);
    printf("Marks: %.2f\n", marks);
}

int main() {
    char name[50];
    int age;
    float marks;

    getStudentDetails(name, &age, &marks);
    displayStudentDetails(name, age, marks);

    return 0;
}

