// 3. Write a program to find the largest and smallest elements in an array.
// Sumit Phuyal

#include <stdio.h>

int main() {
    int numbers[5] = {25, 12, 65, 8, 42}; // fixed array
    int i, largest, smallest;

    largest = smallest = numbers[0]; // assume first element is both

    for(i = 1; i < 5; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}


