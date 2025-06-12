#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[50];
    int roll_no;
    float gpa;
} std;

int main(){
    std s1;

    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter student roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter student GPA: ");
    scanf("%f", &s1.gpa);    

    printf("\nStudent Name = %s", s1.name);
    printf("Student Roll No. = %d\n", s1.roll_no);
    printf("Student GPA = %.3f\n", s1.gpa);

    return 0;
}



/* #include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll_no;
    float gpa;
};

int main() {
    struct student s1;
    char choice;

    do {
        // Clear input buffer before fgets if needed
        int c;
        while ((c = getchar()) != '\n' && c != EOF); // need to understand it tomorrow

        printf("Enter student name: ");
        fgets(s1.name, sizeof(s1.name), stdin);

        printf("Enter student roll number: ");
        scanf("%d", &s1.roll_no);

        printf("Enter student GPA: ");
        scanf("%f", &s1.gpa);

        printf("\nStudent Name = %s", s1.name);
        printf("Student Roll No. = %d\n", s1.roll_no);
        printf("Student GPA = %.3f\n", s1.gpa);

        printf("\nDo you want to enter another student? (y/n): ");
        // Clear input buffer before reading choice
        while ((c = getchar()) != '\n' && c != EOF); // need to understand it tomorrow
        choice = getchar();

    } while (choice == 'y' || choice == 'Y');

    return 0;
} */