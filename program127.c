//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to 
//output.txt
#include <stdio.h>
#include <ctype.h>

int main() {
    // Open the input file in read mode
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    // Open the output file in write mode
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output.txt");
        fclose(inputFile);
        return 1;
    }

    int ch;

    // Read character by character until the end of the file (EOF)
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert to uppercase and write to the output file
        fputc(toupper(ch), outputFile);
    }

    // Close both files to free resources
    fclose(inputFile);
    fclose(outputFile);

    printf("Text successfully converted to uppercase and saved to output.txt\n");

    return 0;
}