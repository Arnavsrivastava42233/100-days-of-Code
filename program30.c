include<stdio.h>
int main()
{
int n;
int rev=0;
printf("Enter a number to reverse:");
scanf("%d",&n);
while(n>0)
{
rev=(rev*10) + (n%10);
n=n/10;
}
printf("reverse of a number is= %d\n", rev);
return 0;
}