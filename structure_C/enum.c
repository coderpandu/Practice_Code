#include <stdio.h>

// Define an enumeration for days of the week
enum day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Declare a variable of type enum day
    enum day today;

    // Assign a value to today
    today = WEDNESDAY;

    // Print the name of the day based on the enum value
    switch (today) {
        case SUNDAY:
            printf("Today is Sunday.\n");
            break;
        case MONDAY:
            printf("Today is Monday.\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday.\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday.\n");
            break;
        case THURSDAY:
            printf("Today is Thursday.\n");
            break;
        case FRIDAY:
            printf("Today is Friday.\n");
            break;
        case SATURDAY:
            printf("Today is Saturday.\n");
            break;
        default:
            printf("Invalid day.\n");
            break;
    }

    return 0;
}
