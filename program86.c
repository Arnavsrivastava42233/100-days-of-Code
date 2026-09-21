//Check if a string is a palindrome.
#include<stdio.h>
#include<string.h>
void main()
{
	int len,i,j,f=0;
 char str[100];
 printf("Enter a string:");
 scanf("%[^\n]",str);
 len=strlen(str);
 for(i=0,j=len-1;j>=0;j--,i++)
 {
 if(i<j)
 {
   if(str[i]!=str[j])
   {
    f=f+1;
    break;
  }
 }
 }
 if(f>0)
 printf("String is not palindrome\n");
 else
 printf("String is palindrome\n");
 
}