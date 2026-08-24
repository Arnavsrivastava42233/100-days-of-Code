#include<stdio.h>
int main() 
{ 
int a; 
printf("Enter the values of a:"); 
scanf("%d",&a); 
if(a>0) 
printf("Number is positive"); 
elseif(a<0) 
printf("Number is negative"); 
else 
printf("Number is equal to zero "); 
return 0;
}