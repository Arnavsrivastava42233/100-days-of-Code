include<stdio.h>
int main()
{
int n;
int fac=1;
printf("Enter value of n:");
scanf("%d",&n);
while(n>0)
{
fac=fac*n;
n--;
}
printf("Factorial of n is=%d\n" , fac);
return 0;
}
