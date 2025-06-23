// 2. Write a program to store information about 10 students in a structure and display it. 
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
    // Declare an array of structures to hold information for 10 students
    struct Student students[10];

    // Input information for each student
    for (int i = 0; i < 10; i++) {
        printf("Enter information for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Grade: ");
        scanf("%f", &students[i].grade);
        
        printf("\n");
    }

    // Display the information for each student
    printf("Student Information:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
        printf("\n");
    }

    return 0;
}


// This program defines a structure named `Student` to hold information about students.
// It then declares an array of `Student` structures to store information for 10 students.
// The program prompts the user to input information for each student, including their name, age, and grade.
// Finally, it displays the information for all 10 students in a formatted manner.
