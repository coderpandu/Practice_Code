#include<stdio.h>

int main(){
    for (int i = 0; i <= 5; i++){
        printf("Hello World \n");        
    }
    printf("\n");// this will add a new line gap between the two loops
    //********************* */
    for (int i = 0; i <= 5; i++){
        printf("%d\n", i);        
    }
    printf("\n");
    //********************* */
    for (int i = 5; i >= 1; i--){ // it prints the i in reverse order
        printf("%d\n", i);        
    }
    // return 0;
//************************************* */
    int i;
    for (i = 0; i <= 10; i++){
        printf("%d\n\n", i); 
    }
    // return 0;
    //******************************************    

    for (float i = 0; i <= 10; i++){
        printf("%f\n", i);
    }
//****************************************** */
    for (char ch = 'a'; ch <= 'z'; ch++){
        printf("%c\n", ch);
    }
    return 0;
}