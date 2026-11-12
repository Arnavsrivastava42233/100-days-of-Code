//Assign explicit values starting from 10 and print them.
#include <stdio.h>

// Define an enum where the first item starts at 10
// Subsequent items automatically increment: 11, 12, 13
enum StatusCode {
    SUCCESS = 10,
    WARNING,
    ERROR,
    FATAL
};

int main() {
    // Print the explicitly assigned and auto-incremented values
    printf("SUCCESS: %d\n", SUCCESS);
    printf("WARNING: %d\n", WARNING);
    printf("ERROR: %d\n", ERROR);
    printf("FATAL: %d\n", FATAL);

    return 0;
}