//Find the longest word in a sentence
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(const char *sentence, char *longest) {
    int maxLen = 0;
    int currLen = 0;
    int startIdx = 0;
    int maxStartIdx = 0;

    int i = 0;
    while (sentence[i] != '\0') {
        if (isalnum((unsigned char)sentence[i])) {
            if (currLen == 0) {
                startIdx = i; // Mark the beginning of a new word
            }
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStartIdx = startIdx;
            }
            currLen = 0; // Reset length for the next word
        }
        i++;
    }

    if (currLen > maxLen) {
        maxLen = currLen;
        maxStartIdx = startIdx;
    }

    strncpy(longest, sentence + maxStartIdx, maxLen);
    longest[maxLen] = '\0'; // Null-terminate the string
}

int main() {
    char sentence[] = "The quick brown fox jumps over the lazy dog, extraordinarily!";
    char longestWord[100];

    findLongestWord(sentence, longestWord);

    printf("Sentence: \"%s\"\n", sentence);
    printf("Longest word: \"%s\"\n", longestWord);

    return 0;
}