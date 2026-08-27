#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:");
scanf("%d",&n);
int i;
printf("Factors of n is=");
for(i=1;i<=n;i++)
{
if(n%i==0)
printf("%d", i);
}
return 0;
}