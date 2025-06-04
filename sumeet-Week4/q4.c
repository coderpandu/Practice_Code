// 4. Write a program to implement storage classes.
//Sumit Phuyal

#include <stdio.h>

// 🔹 Global variable with extern storage class
extern int globalVar;

void autoStorage() {
    auto int x = 10;  // auto is default for local variables
    printf("Auto variable x = %d\n", x);
}

void registerStorage() {
    register int y = 20;  // Suggest storing in CPU register
    printf("Register variable y = %d\n", y);
}

void staticStorage() {
    static int z = 0;  // Retains value between function calls
    z++;
    printf("Static variable z = %d\n", z);
}

int globalVar = 100; // Definition of extern variable

int main() {
    autoStorage();
    registerStorage();
    staticStorage();
    staticStorage();  // Call again to show static behavior

    printf("Extern (global) variable = %d\n", globalVar);

    return 0;
}
