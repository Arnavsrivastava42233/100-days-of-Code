//Count frequency of a given character in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	int len,i,j,f=0;
 char str[100];
 printf("Enter a string:");
 scanf("%[^\n]",str);
 len=strlen(str);
 printf("Enter the number to find the frequency: ");
 char ch;
 scanf(" %c",&ch);
 for(i=0;i<len;i++)
 {
 if(str[i]==ch)
 f=f+1;
 }
 printf("Frequency of given charecter is %d\n",f);
 return 0;
}