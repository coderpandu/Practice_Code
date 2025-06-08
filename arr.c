#include <stdio.h>

int countOdd(int arr[], int n);
void reverseArr(int arr[], int n);
void printArr(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf("Number of odd elements in the array: %d\n", countOdd(arr, 20));
    reverseArr(arr, 20);
    printArr(arr, 20);
    return 0;
}

void reverseArr(int arr[], int n){
    for(int i = 0; i < n / 2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1];
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}
