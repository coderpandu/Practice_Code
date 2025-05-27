/* #include <stdio.h>

void sum() {
    int a = 5, b = 3;
    int result = a + b;
    printf("Sum = %d\n", result);
}

int main() {
    sum();
    return 0;
} */


/* #include <stdio.h>

void sum(int a, int b) {
    int result = a + b;
    printf("Sum = %d\n", result);
}

int main() {
    sum(5, 3);
    return 0;
} */


/* #include <stdio.h>

int sum() {
    int a = 5, b = 3;
    return a + b;
}

int main() {
    int result = sum();
    printf("Sum = %d\n", result);
    return 0;
} */


#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 3);
    printf("Sum = %d\n", result);
    return 0;
}
