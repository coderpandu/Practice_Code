/* #include <stdio.h>

int main() {
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("3x3 Matrix:\n");

    for (int i = 0; i < 3; i++) {         // rows
        for (int j = 0; j < 3; j++) {     // columns
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
} */

/* #include <stdio.h>
int main() {
    int scores[5] = {85, 90, 78, 92, 88};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    printf("Average score = %d\n", sum / 5);
    return 0;
} */

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

/* #include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], sum[3][3];
    int i, j;

    printf("Enter elements for arr1 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements for arr2 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The first 3x3 matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("The second 3x3 matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of the two matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
} */