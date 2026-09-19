//Count characters in a string without using built-in length functions.
#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
printf("Enter a string:");
scanf("%s",&str);
int count=0;
while(str[count]!='\0')
count++;
printf("Length of string entered is = %d\n",count);
}