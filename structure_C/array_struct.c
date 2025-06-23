#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
    char gender;
    long int phone_number;
};

int main(){
    struct Student students[3];

    for (int i = 0; i < 3; i++){
        printf("Enter roll number for student %d: ", i++);
        scanf("%d", &students[i].roll);

        printf("Enter name for student %d: ", i++);
        scanf(" %[^\n]", students[i].name);  
    }

    // Print all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Roll: %d, Name: %s\n", students[i].roll, students[i].name);
    }

    return 0;
}


