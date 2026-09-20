//Count vowels and consonants in a string.
#include<stdio.h>
#include<string.h>
void main()
{
 char str[100];
 printf("Enter a string:");
 scanf("%s",&str);
 int vowels=0,consonants=0,i;
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
  vowels=vowels+1;
  else 
  consonants=consonants+1;
 }
 printf("Vowels: %d\n", vowels);         
 printf("Consonants: %d\n", consonants);
}