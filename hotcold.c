#include <stdio.h>

void hotcold();

int main(){
    // float temp;
    hotcold();    
    return 0;
}

void hotcold() {
    float temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);
    
    if (temp > 30) {
        printf("It's hot.\n");
    } else if (temp < 15) {
        printf("It's cold.\n");
    } else {
        printf("The temperature is moderate.\n");
    }  
}
