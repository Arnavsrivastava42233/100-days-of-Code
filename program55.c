//Write a program to print all the prime numbers from 1 to n
#include<stdio.h>
int main()
{
int n;
int i,c=0,j;
printf("Enter value of n:");
scanf("%d",&n);
printf("Prime numbers are\n");
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++)
 {
  if(i%j==0)
  c=c+1;
 }
  if(c==2)
  printf(" %d",i);
  c=0;
}
}