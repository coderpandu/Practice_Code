// function with no argument and no return value

/* #include <stdio.h>

void evenorodd();

int main() {
    evenorodd();
    return 0;
}

void evenorodd() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
} */

// function with argument and no return value

/* #include <stdio.h>
void evenorodd(int num);
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);    
    evenorodd(num);    
    return 0;
}
void evenorodd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
} */

// function with argument and return value

/* #include <stdio.h>
int evenorodd(int num);

int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = evenorodd(num);
    printf("%d\n", result);
}  
int evenorodd(int num) {
    if (num % 2 == 0) {
        return 1; // even
    } else {
        return 0; // odd
    }
} */

// function with no argument and return value
