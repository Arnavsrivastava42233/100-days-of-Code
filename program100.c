//Print all sub-strings of a string
#include <stdio.h>
#include <string.h>

void printAllSubstrings(const char *str) {
    int len = strlen(str);

    // Outer loop: starting index
    for (int i = 0; i < len; i++) {
        // Middle loop: ending index
        for (int j = i; j < len; j++) {
            // Inner loop: print characters from i to j
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }
}

int main(void) {
    char str[100];

    printf("Enter a string: ");
    
    // Read input safely (including spaces) using fgets
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove trailing newline added by fgets if present
        str[strcspn(str, "\n")] = '\0';

        printf("\nAll substrings of \"%s\":\n", str);
        printAllSubstrings(str);
    }

    return 0;
}