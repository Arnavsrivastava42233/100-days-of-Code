#include<stdio.h> 
int main() 
{    
char a; 
printf("Enter the values of a:"); 
scanf("%c",&a); 
if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U') 
{ 
printf("Entered number is a vowel"); 
} 
else 
{ 
printf("Entered number is a consonant"); 
} 
return 0; 
}