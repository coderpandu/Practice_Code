#include <stdio.h>

// Define an enum called 'Day'
enum Day {
    MONDAY,    // MONDAY is implicitly assigned 0
    TUESDAY,   // TUESDAY is implicitly assigned 1
    WEDNESDAY, // WEDNESDAY is implicitly assigned 2
    THURSDAY,  // THURSDAY is implicitly assigned 3
    FRIDAY,    // FRIDAY is implicitly assigned 4
    SATURDAY,  // SATURDAY is implicitly assigned 5
    SUNDAY     // SUNDAY is implicitly assigned 6
};

int main() {
    // Declare a variable of type 'enum Day'
    enum Day today;

    // Assign a value from the enum to the variable
    today = WEDNESDAY;

    // Print the value of the enum variable
    printf("Today is day: %d\n", today);

    // You can also use the enum values directly in comparisons
    if (today == WEDNESDAY) {
        printf("It's Wednesday!\n");
    }

 return 0;
}


