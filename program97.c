//Print the initials of a name.
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100],ints[100];
 printf("Enter the sentence:");
 scanf("%[^\n]", str);
 int len= strlen(str);
 int i,k=0;
 if (len > 0 && str[0] != ' ')
    {
        ints[k++] = str[0];
        ints[k++] = '.';
    }
 for(i=1;i<len;i++)
 {
  if(str[i]==' ')
  {
  ints[k++]=str[i+1];
  ints[k++]='.';
  }
 }
 printf("Initials Of Name is:%s\n",ints);
 return 0;
}