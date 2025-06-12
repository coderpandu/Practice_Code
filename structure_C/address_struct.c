#include <stdio.h>
#include <string.h>

struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd (struct address add);

int main(){
    struct address adds[3];

    printf("Enter info for person 1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);

    printf("Enter info for person 2: ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);

    printf("Enter info for person 3: ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);


    return 0;
}

void printAdd (struct address add){
    printf("Address is\n HouseNo: %d, Block: %d, City: %s, State: %s \n", add.houseNo, add.block, add.city, add.state);
}