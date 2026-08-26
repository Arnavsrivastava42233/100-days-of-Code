include<stdio.h>
int main()
{
int n;
int c=0,i;
printf("Enter value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
c=c+1;
}
if(c==2)
printf("Entered value is a prime number");
else
printf("Entered value is not a prime number");
return 0;
}