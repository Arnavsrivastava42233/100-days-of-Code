//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine 
//if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if 
//they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

int main() {
    int i, f1 = 0, f2 = 0, check = 0, j;
    char str1[100], str2[100];
    
    printf("Enter the strings:\n");
    scanf("%[^\n]", str1);
    
    // Notice the space before % to consume the leftover newline from the first input
    scanf(" %[^\n]", str2);
    
    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagram\n");
    } else {
        for (i = 0; i < strlen(str1); i++) {
            char ch = str1[i];
            for (j = 0; j < strlen(str1); j++) {
                if (ch == str1[j])
                    f1 = f1 + 1;
                if (ch == str2[j])
                    f2 = f2 + 1;
            }
            if (f1 != f2) {
                check += 1;
            }
            f1 = 0; 
            f2 = 0;
        }
        
        if (check > 0)
            printf("Not Anagram\n");
        else
            printf("Anagram\n");
    }
    
    return 0;
}