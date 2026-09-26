//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

// Helper function to reverse a segment of a string in-place
void reverseWord(char* str, int start, int end) 
{
    char temp;
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    char sentence[200];

    printf("Enter a sentence: ");
    // Safely read a line of text, preventing buffer overflow
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) 
    {
        // Remove trailing newline character added by fgets
        sentence[strcspn(sentence, "\n")] = '\0';
    }

    int len = strlen(sentence);
    int wordStart = 0;

    for (int i = 0; i <= len; i++) 
    {
        // A word ends when we hit a space or the end of the string
        if (sentence[i] == ' ' || sentence[i] == '\0') 
        {
            // Reverse the current word (from wordStart to i - 1)
            reverseWord(sentence, wordStart, i - 1);
            
            // The next word will start after the space
            wordStart = i + 1;
        }
    }

    // Output the resulting sentence
    printf("Result: %s\n", sentence);

    return 0;
}
