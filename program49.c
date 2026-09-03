//Write a program to print the following pattern:
//5
//45
//345
//2345
//12345
#include<stdio.h>
int main()
{
int i,j,k=5;
for(i=1;i<=5;i++,k=k-i)
{
for(j=1;j<=i;j++)
{
printf("%d",k);
k=k+1;
}
printf("\n");
}
}