#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll_no;
    float gpa;
};

void printInfo(struct student s);

int main(){
    // Array of structures

    /* struct student ece[100];
    ece[0].roll_no = 1;
    strcpy(ece[0].name, "Sumit Phuyal");
    ece[0].gpa = 3.5; */

    /* printf("Studnet Name = %s\n", ece[0].name);
    printf("\n"); */
    // Individual structure initialization
    /* struct student s1 = {"Sumit", 1, 3.5};
    printInfo(s1); */
    /* struct student s2 = {"Sumeet", 2, 3.8};
    struct student s3 = {"Suman", 3, 3.9};
    struct student s4 = {0}; */


    /* printf("Student roll = %d\n", s1.roll_no);
    printf("Student name = %s\n", s1.name);
    printf("Student GPA = %.2f\n", s1.gpa); */

    //printf("\n");

    // Accessing structure members using pointer
    /* struct student *ptr = &s1;
    printf("Student roll = %d\n", (*ptr).roll_no);
    printf("Student name = %s\n", (*ptr).name); */

   // printf("\n");
    // using arrow operator
    /* printf("Student roll = %d\n", ptr->roll_no);
    printf("Student GPA = %.2f\n", ptr-> gpa);
    printf("Student name = %s\n", ptr->name);

    return 0; */
    struct student s1 = {"Sumit", 1, 3.5};
    printInfo(s1);
}

void printInfo(struct student s){
    printf("Student Name = %s\n", s.name);
    printf("Student Roll No. = %d\n", s.roll_no);
    printf("Student GPA = %.2f\n", s.gpa);
}