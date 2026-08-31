#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:");
scanf("%d",&n);
int cp=n;
int product=1;
while(cp>0)
{
if((cp%10)%2!=0)
product = product*(cp%10);
cp=cp/10;
}
printf("product of odd digit of n is= %d/n", product);
return 0;
}