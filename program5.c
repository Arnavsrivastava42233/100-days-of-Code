#include<stdio.h> 
int main() 
{
 float a,b,c; 
 printf("Enter the values of a b c:"); 
 scanf("%f",&a); 
 scanf("%f",&b); 
 scanf("%f",&c); 
 float D= b*b-(4*a*c); 
 if(D>0) 
 printf("\nTwo real roots exist"); 
 else 
 printf("\nTwo compex roots exist"); 
 return 0; 
 }