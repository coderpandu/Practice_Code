#include <stdio.h>
int main() {
    int scores[5] = {85, 90, 78, 92, 88};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    printf("Average score = %d\n", sum / 5);
    return 0;
}


/* #include <stdio.h>

int main(){ 
    int marks[] = {10, 20, 30, 40, 50}; // Initialize an array with 5 elements

    marks[0] = 100; // Change the first element of the array
    printf("%d\n", marks[0]); // Print the first element of the array
    printf("%d\n", marks[4]);
    printf("%d\n", marks[5]); // prints garbage value since index 5 is out of bounds
     // Print the second element of the array

    for (int i = 0; i < 5; i++) {
        printf("%d", marks[i]); // Print all elements of the array
    }

    return 0;
}
 */

/* #include <stdio.h>

int main() {
    int numbers[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input from user
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Printing the array
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    // printf("%d\n", n); // Print the first element of the array

    return 0;
} */


/* #include <stdio.h>

int main(){
    float items[3], withTAX, sum;
    printf("Enter the price of first item: ");
    scanf("%f", &items[0]);
    printf("Enter the price of second item: ");
    scanf("%f", &items[1]);
    printf("Enter the price of third item: ");
    scanf("%f", &items[2]);

    sum = items[0] + items[1] + items[2];
    withTAX = sum + (sum * 0.13); // Assuming a tax rate of 13%
    printf("Total price with tax: %.2f\n", withTAX);
    return 0;
} */