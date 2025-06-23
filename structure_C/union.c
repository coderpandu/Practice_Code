#include <stdio.h>

union Job {
    float salary;
    int workerNo;
}j; // Added a semicolon here to correctly terminate the union definition

int main() {
    // union Job j; // Declare a variable of type union Job

    j.salary = 12.3;

    // when j.workerNo is assigned a value,
    // j.salary will no longer hold 12.3
    j.workerNo = 100;

    printf("Salary = %.1f\n", j.salary);
    printf("Number of workers = %d\n", j.workerNo);
    return 0;
}

