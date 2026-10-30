//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char filename[100];
    int vowels = 0, consonants = 0;
    int ch;

    printf("Enter the path/name of the text file: ");
    if (scanf("%99s", filename) != 1) 
	{
        printf("Error reading filename.\n");
        return 1;
    }

    file = fopen(filename, "r");
    if (file == NULL) 
	{
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
	{
        ch = tolower(ch);

        if (isalpha(ch)) 
		{
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
			{
                vowels++;
            } else 
			{
                consonants++;
            }
        }
    }

    fclose(file);

    printf("\n--- Analysis Results ---\n");
    printf("Vowels     : %d\n", vowels);
    printf("Consonants : %d\n", consonants);

    return 0;
}