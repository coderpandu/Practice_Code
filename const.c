#include <stdio.h>

int main(){
    const int num = 10;
    int *ptr = (int *)&num; // This line is incorrect, as it violates const correctness
    *ptr = 20; // Attempting to modify a const variable

    printf("Modifiedd const: %d\n", num); // This will print 20, but it's undefined behavior
    return 0;// This line will never be reached due to the undefined behavior
}



