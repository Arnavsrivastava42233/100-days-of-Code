#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:");
scanf("%d",&n);
int d,fac=1,sum=0,cp=n;
while(cp>0)
{
d=cp%10;
while(d>0)
{
fac=fac*d;
d--;
}
sum=sum+fac;
fac=1;
cp=cp/10;
}
if(sum==n)
printf("Entered number is strong number/n");
else
printf("Entered number is not a strong number/n");
return 0;
}