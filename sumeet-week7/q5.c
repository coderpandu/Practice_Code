/* 5. Write a program to read roll number, name, address, age, 
and average marks of class 12 using structure and display the 
details from the function.  */
// Sumit Phuyal

#include <stdio.h>
#include <string.h>

// Define the structure to hold student details
struct Student {
    int rollNumber;
    char name[50];
    char address[100];
    int age;
    float marks[5]; // Array to hold marks for 5 subjects
    float averageMarks;
};

// Function to calculate average marks
void calculateAverage(struct Student *student) {
    float sum = 0.0;
    for (int i = 0; i < 5; i++) {
        sum += student->marks[i];
    }
    student->averageMarks = sum / 5; // Calculate average
}

// Function to display student details
void displayStudentDetails(struct Student student) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Age: %d\n", student.age);
    printf("Marks:\n");
    printf("Math: %.2f\n", student.marks[0]);
    printf("Physics: %.2f\n", student.marks[1]);
    printf("Chemistry: %.2f\n", student.marks[2]);
    printf("English: %.2f\n", student.marks[3]);
    printf("Computer: %.2f\n", student.marks[4]);
    printf("Average Marks: %.2f\n", student.averageMarks);
}

int main() {
    struct Student student;

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    
    printf("Enter name: ");
    scanf(" %[^\n]", student.name); // Read string with spaces
    
    printf("Enter address: ");
    scanf(" %[^\n]", student.address); // Read string with spaces
    
    printf("Enter age: ");
    scanf("%d", &student.age);
    
    // Input marks for each subject
    printf("Enter marks for Math: ");
    scanf("%f", &student.marks[0]);
    
    printf("Enter marks for Physics: ");
    scanf("%f", &student.marks[1]);
    
    printf("Enter marks for Chemistry: ");
    scanf("%f", &student.marks[2]);
    
    printf("Enter marks for English: ");
    scanf("%f", &student.marks[3]);
    
    printf("Enter marks for Computer: ");
    scanf("%f", &student.marks[4]);

    // Calculate average marks
    calculateAverage(&student);

    // Display the student details
    displayStudentDetails(student);

    return 0;
}



