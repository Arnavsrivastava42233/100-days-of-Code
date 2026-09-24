//#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char *str) {
    int read = 0, write = 0;

    while (str[read] != '\0') {
        if (!isVowel(str[read])) {
            str[write] = str[read];
            write++;
        }
        read++;
    }
    
    str[write] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        removeVowels(str);
        printf("Result: %s", str);
    }

    return 0;
}
