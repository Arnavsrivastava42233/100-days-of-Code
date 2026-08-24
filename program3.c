#include<stdio.h>
 int main()
 { 
 int i,j,k;
 printf("Enter any number");   
 scanf("%d%d%d", &i, &j, &k);   
 if (i>j && j>k) 
 {       
 printf("%d", i);    
 }   
 else if (j>i && i>k)
 {       
 printf("%d", j);   
 }    
 else(k>i && i>j);   
 {       
 printf("%d", k);
 } 
 return 0;
 }