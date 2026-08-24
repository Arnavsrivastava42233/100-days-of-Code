#include<stdio.h>
int main()
{ 
int n,pro=1;
printf("Enter value of n:);
scanf("%d"&n);
while(n>0)
{
if(n%2==0)
{
pro=pro*n;
n--;
}
else
n--;
}
printf("product of even numbers till n is:n = %d\n", pro); 
return 0;
}
