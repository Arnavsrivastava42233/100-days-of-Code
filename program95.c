//Check if one string is a rotation of another.

#include<stdio.h>
#include<string.h>
int main()
{
	int len1,len2,i,j,k=0,f=0;
 char str1[100];
 printf("Enter a string:");
 scanf(" %[^\n]", str1);
 len1=strlen(str1);
 
 char str2[100];
 printf("Enter a string to check:");
 scanf(" %[^\n]", str2);
 len2=strlen(str2);
 if(len1!= len2)
 {
 printf("NO ROTATION\n");
 return 0;
 }
 else
 {
 for(i=0;i<len1;i++)
   {
    if(str2[0]==str1[i])
	{
	k=i;
	break;
	}
   }
   for(j=0;j<len1;j++)
   {
    if(i<len1)
	{
	if(str2[j]!=str1[i])
	f=f+1;
	j++;
	i++;
	}
	else
	i=0;
   }
   if(f>0)
   printf("NO ROTATION\n");
   else
   printf("ROTATION\n");
 }
 return 0;
}
