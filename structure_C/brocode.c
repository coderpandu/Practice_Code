#include <stdio.h>

struct student {
    char name[50];
    int age;
    float gpa;
    char address[100];
};

int main(){
    struct student s1 = {"John Doe", 20, 5.9, "123 Main St, Anytown, USA"};

    struct student *ptr = &s1;
    printf("Name : %s\nAge  %d\nGPA : %.2f\nAddress : %s\n",(*ptr).name, (*ptr).age, (*ptr).gpa, (*ptr).address);
    printf("\nUsing pointer notation:\n");
    printf("Name : %s\nAge  %d\nGPA : %.2f\nAddress : %s\n", ptr->name, ptr->age, ptr->gpa, ptr->address);
}


