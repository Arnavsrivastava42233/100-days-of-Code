//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool areAnagrams(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    int count[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++; // Increment for str1
        count[(unsigned char)str2[i]]--; // Decrement for str2
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    return 0;
}