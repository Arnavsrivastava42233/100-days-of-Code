//Print each character of a string on a new line.
#include<stdio.h>
#include<string.h>
void main()
{
 char str[100];
 printf("Enter a string:");
 scanf("%s",&str);
 int n=0;
 for(n=0;str[n]!='\0';n++)
 printf("%c\n",str[n]);
 
}