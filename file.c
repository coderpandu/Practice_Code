#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int rollno;
    float gpa;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Roll Number: %d\n", rollno);
    fprintf(fptr, "GPA: %.2f\n", gpa);
    fclose(fptr);
    return 0;
    
}