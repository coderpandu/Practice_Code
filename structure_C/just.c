#include <stdio.h>

struct sumit {
    int roll;
    char name[50], skin_color[20];
    float height;
    char address[100];
    unsigned long long phone_number;  // Changed here
};
int main () {
    struct sumit student1 = {18, "Sumeet Phuyal", "Gaun Goro", 5.8, "Kathmandu, Nepal"};

    printf("Roll Number: %d\n", student1.roll);
    printf("Name: %s\n", student1.name);
    printf("Skin Color: %s\n", student1.skin_color);
    printf("Height: %.1f\n", student1.height);
    printf("Address: %s\n", student1.address);
    printf("Phone Number: %llu\n", student1.phone_number); // Changed here

    return 0;
}


// A Program that use structure and array to print five students' details
/* #include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 5  
struct Student {
    int roll;
    char name[50];
    char skin_color[20];
    unsigned long long phone_number;  // Changed to unsigned long long for larger phone numbers
    float height;
    char address[100];
}students[MAX_STUDENTS];
int main() {
    int i;
    // Input details for each student
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %s", students[i].name);  // Read string with spaces
        printf("Skin Color: ");
        scanf(" %s", students[i].skin_color);
        printf("Phone Number: ");
        scanf("%llu", &students[i].phone_number);
        printf("Height: ");
        scanf("%f", &students[i].height);
        printf("Address: ");
        scanf(" %[^\n]", students[i].address);
    }

    // Display details for each student
    printf("\nStudent Details:\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Skin Color: %s\n", students[i].skin_color);
        printf("Phone Number: %llu\n", students[i].phone_number);
        printf("Height: %.1f\n", students[i].height);
        printf("Address: %s\n", students[i].address);
    }

    return 0;
} */