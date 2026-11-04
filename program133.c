//Create an enum for months and print how many days each month has.
#include <stdio.h>

// Define an enum for the months of the year
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

// Function to return the number of days in a month (using 28 for February as standard)
int getDaysInMonth(enum Month m) {
    switch (m) {
        case FEBRUARY:
            return 28; // Note: Use 29 if accounting for leap years
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            return 31;
        default:
            return 0; // Invalid month
    }
}

// Array of month names to map enum values to strings
const char* monthNames[] = {
    "", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
    printf("Number of days in each month:\n");
    printf("-----------------------------\n");
    
    for (int i = JANUARY; i <= DECEMBER; i++) {
        enum Month currentMonth = (enum Month)i;
        printf("%-10s : %d days\n", monthNames[i], getDaysInMonth(currentMonth));
    }

    return 0;
}