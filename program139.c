//Show that enums store integers by printing assigned values
#include <stdio.h>

enum Day {
    SUNDAY = 0,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6
};

int main() {
    // Declare an enum variable and assign an enum constant
    enum Day today = WEDNESDAY;

    // 1. Print the enum value using %d format specifier
    printf("1. Direct integer value of WEDNESDAY: %d\n", today);

    // 2. Perform arithmetic operations directly with enums
    int nextDayValue = today + 1;
    printf("2. Arithmetic operation (WEDNESDAY + 1): %d\n", nextDayValue);

    // 3. Assign a raw integer directly to an enum variable
    enum Day customDay = 5; 
    printf("3. Enum variable assigned raw integer 5: %d\n", customDay);

    return 0;
}