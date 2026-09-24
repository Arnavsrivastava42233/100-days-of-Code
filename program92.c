//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <stdbool.h>

char findFirstRepeatingLower(const char *str) {
    bool seen[26] = {false};

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';

            if (seen[index]) {
                return ch;
            }

            seen[index] = true;
        }
    }

    return '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        char result = findFirstRepeatingLower(str);

        if (result != '\0') {
            printf("First repeating lowercase letter: %c\n", result);
        } else {
            printf("No repeating lowercase letters found.\n");
        }
    }

    return 0;
}