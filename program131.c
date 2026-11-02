//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value#include <stdio.h>

// Define the enumeration for days of the week
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Array of strings to map enum values to their string representations
    const char* dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", 
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Days of the week and their integer values:\n");
    printf("-----------------------------------------\n");

    // Loop through the enum values from SUNDAY to SATURDAY
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", dayNames[i], i);
    }

    return 0;
}