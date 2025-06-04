// 4. Write a program to reverse the array elements. 
// Sumit Phuyal

#include <stdio.h>

int main(){
    int elements[]= {1,2,3,4,5};
    int i;

    printf("Original Order of Elements:\n");
    for (i = 0; i < 5; i++){
        printf("%d\n", elements[i]);
    }

    printf("Reversed Order of Elements:\n");
    for (i = 4; i >= 0; i--){
        printf("%d\n", elements[i]);
    }
    return 0; 
}



