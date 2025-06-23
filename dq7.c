#include <stdio.h>

struct Student {
    int rollNumber;  // 4 bytes
    char grade;      // 1 byte
    float marks;     // 4 bytes
};

union Data {
    int i;           // 4 bytes
    char c;          // 1 byte
    float f;         // 4 bytes
};

int main() {
    struct Student s1;
    union Data d1;

    // Structure: All members can hold values simultaneously
    s1.rollNumber = 101;
    s1.grade = 'A';
    s1.marks = 85.5;
    printf("Structure: rollNumber = %d\ngrade = %c\nmarks = %.1f\n", 
           s1.rollNumber, s1.grade, s1.marks);
    printf("Size of structure: %zu bytes\n", sizeof(s1));

    printf("\n");

    // Union: Only one member can hold a value at a time
    d1.i = 10;
    printf("Union: i = %d\n", d1.i);
    d1.f = 3.14;
    printf("Union: f = %.2f\ni = %d (overwritten)\n", d1.f, d1.i);
    printf("Size of union: %zu bytes\n", sizeof(d1)); // %zu is the format specifier for size

    return 0;
}


