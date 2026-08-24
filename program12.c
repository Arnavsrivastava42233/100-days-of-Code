#include<stdio.h> 
int main() 
{     
int i,j,n; 
char c; 
printf("enter the value of n"); 
scanf("%d",&n); 
for(i=65;i<=68;i++) 
{ 
for(j=65;j<=i;j++) 
{ 
printf("%c",j); 
} 
printf("\n"); 
} 
return 0; 
}