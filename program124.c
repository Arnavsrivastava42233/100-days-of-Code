//Q124: Take two filenames from the user – a source file and a destination file. 
//Copy all the content from the source file to the destination file using fgetc() and fputc().


#include <stdio.h>
int main()
{
    char source[100], destination[100];
    FILE *fs, *fd;
    char ch;
    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", destination);

    fs = fopen(source, "r");
    if (fs == NULL)
    {
        printf("Source file could not be opened.\n");
        return 1;
    }
    fd = fopen(destination, "w");
    if (fd == NULL)
    {
        printf("Destination file could not be created.\n");
        fclose(fs);
        return 1;
    }
    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, fd);
    }
    printf("File copied successfully to %s\n", destination);
    fclose(fs);
    fclose(fd);

    return 0;
}