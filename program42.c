#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:");
scanf("%d",&n);
int sum=0;
int cp=n;
for(int i=1;i<n;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
printf("Enter number is a perfect number/n");
else
printf("Entered number is not a perfect number/n");
return 0;
}