//Replace spaces with hyphens in a string.
#include<stdio.h>
#include<string.h>
void main()
{
	int len,i,j,sp=0,alp=0,d=0,sc=0;
 char str[100];
 printf("Enter a string:");
 scanf("%[^\n]",str);
 len=strlen(str);
 for(i=0,j=len-1;j>=0;j--,i++)
 {
 if((int)str[i]==32)
 str[i]='-';
 }
 printf("Changed String is %s\n",str);
}