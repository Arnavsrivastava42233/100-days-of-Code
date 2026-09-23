//Toggle case of each character in a string.
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
	 if((int)str[i]>64 && (int)str[i]<91)
     str[i] = str[i] + 32;
     
	 else
	 str[i]=str[i]-32;
 }
 printf("Toggle case string is: %s\n",str);
}