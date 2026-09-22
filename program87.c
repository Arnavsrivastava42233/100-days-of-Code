//Count spaces, digits, and special characters in a string.
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
   sp=sp+1;
 else if((int)str[i]>47&&(int)str[i]<58)
   d=d+1;
 else if((int)str[i]>64 && (int)str[i]<91|| (int)str[i]>96 && (int)str[i]<123)   
    alp=alp+1;
  else
  sc=sc+1;
 }

 printf("Number of special charecter in string is %d\n",sc);
 printf("Number of Digit in string is %d\n",d);
 printf("Number of alphabets in string is %d\n",alp);
 printf("Number of space in string is %d\n",sp); 
}