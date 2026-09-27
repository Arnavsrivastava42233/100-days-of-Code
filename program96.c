//Reverse each word in a sentence without changing the word order.
#include<stdio.h>
#include<string.h>
int main()
{
 char  str[200],wd[100]="",newstr[200];
 printf("Enter the sentence:");
 scanf("%[^\n]", str);
 int len= strlen(str);
 int k=0,m=0,i=0,j;
 while (i <= len)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            wd[k] = str[i];
            k++;
            i++;
        }
        else
        {
            wd[k] = '\0';

            for (j = k - 1; j >= 0; j--)
            {
                newstr[m++] = wd[j];
            }

            if (str[i] == ' ')
            {
                newstr[m++] = ' ';
                i++;
            }
            else
            {
                i++; 
            }

            k = 0;
        }
    }

    newstr[m] = '\0';

    printf("Reversed string is: %s\n", newstr);
    return 0;
}



