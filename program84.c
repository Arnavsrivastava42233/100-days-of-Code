//Convert a lowercase string to uppercase without using built-in functions.
#include<stdio.h>
#include<string.h>
void main()
{
 char str[100];
 printf("Enter a string:");
 scanf("%s",&str);
 int i;
 for(i=0;str[i]!='\0';i++)
 {
	 
    str[i] = str[i] - 32;
         
 }
 printf("Uppercase: %s\n",str);
}