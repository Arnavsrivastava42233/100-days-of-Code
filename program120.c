//Write a program to take a string input. Change it to sentence case.
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 printf("enter the sentence:");
 scanf("%[^\n]",str);
 int i,len=strlen(str);
 for(i=0;i<len;i++)
 {
  if(i==0)
	str[i]=str[i]-32;	 
  else if(str[i]==' ')
  str[i+1]=str[i+1]-32;
 }
 printf("%s",str);
 return 0;
}