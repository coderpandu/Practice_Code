#include <stdio.h>

void storeTable(int table[][10], int n, int m, int num);

int main(){
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    // Print table for 2
    for(int i = 0; i < 10; i++){
        printf("%d\t", tables[0][i]);
    }
    printf("\n");

    // Print table for 3
    for (int i = 0; i < 10; i++){
        printf("%d\t", tables[1][i]);
    }
    printf("\n");

    return 0;
}

void storeTable(int table[][10], int n, int m, int num){
    for(int i = 0; i < m; i++){
        table[n][i] = num * (i + 1);
    }
}