//Print all enum names and integer values using a loop#include <stdio.h>

// Define an enum with explicit values
enum StatusCode {
    SUCCESS = 10,
    WARNING = 15,
    ERROR = 30,
    FATAL = 50
};

// Create a structure to pair the string name with the enum value
struct StatusMapping {
    const char *name;
    enum StatusCode code;
};

int main() {
    // Initialize an array containing our enum pairs
    struct StatusMapping statuses[] = {
        {"SUCCESS", SUCCESS},
        {"WARNING", WARNING},
        {"ERROR", ERROR},
        {"FATAL", FATAL}
    };

    // Calculate the number of elements in the array
    int size = sizeof(statuses) / sizeof(statuses[0]);

    printf("--- Enum Names and Values ---\n");
    
    // Loop through the array and print each name and value
    for (int i = 0; i < size; i++) {
        printf("Name: %-10s | Value: %d\n", statuses[i].name, statuses[i].value);
    }

    return 0;
}