//Print initials of a name with the surname displayed in full.
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100],ints[100],wd[100];
 printf("Enter the sentence:");
 scanf("%[^\n]", str);
 int len= strlen(str);
 int i=0,k=0,j=0,l;
 	
 while(i<=len)
 {
  if (str[i] != ' ' && str[i]!='\0')
        {
            wd[j] = str[i];
            j++;
        }
	else
 {
 wd[j] = '\0';
  if(str[i]==' ')
  {
   ints[k++]=wd[0];
   ints[k++]='.';
  }
  
  else if(str[i]=='\0')
 {
  for(l=0;l<strlen(wd);l++)
  {
  ints[k++]=wd[l];
  }
 }
 j=0;
 }
 i++;
 }
 ints[k] = '\0';
 printf("Initials Of Name is:%s\n",ints);
 return 0;
}