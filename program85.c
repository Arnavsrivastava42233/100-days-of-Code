//Reverse a string.
#include<stdio.h>
#include<string.h>
void main()
{
	int len,i,j;
 char str[100];
 printf("Enter a string:");
 scanf("%[^\n]",str);
 len=strlen(str);
 char reverse[100];
 for(i=0,j=len-1;j>=0;j--,i++)
 {
reverse[i]=str[j];	 
 }
 printf("Reverse string is %s\n",reverse);
 
}