// 1. Write a program to search for an element in an array.
// Sumit Phuyal

#include <stdio.h>

int main(){
    int numbers[] = {3,4,7,8,10,13,16,17,19,20}; //array of ten numbers
    int findNum, i;

    printf("Enter a number you want to find: "); //taking the user input of finding number
    scanf("%d", &findNum);

    for (i = 0; i < 10; i++){ // running the loop from 0th index to the 9th index
        if(numbers[i]== findNum){
            printf("The number is found. That is %d\n", numbers[i]); // if found
            break;
        }
    }
    if (i == 10){
        printf("Number was not found!!"); // if not found 
    }
    return 0;
}





























/* #include <stdio.h>

int main(){
    int arr[100], n, search, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d.\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
} */