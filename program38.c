#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:");
scanf("%d",&n);
int cp=n;
int sum=0;
while(cp>0)
{
sum=sum+(cp%10);
cp=cp/10;
}
printf("Sum of digit of n is= %d/n", sum);
return 0;
}