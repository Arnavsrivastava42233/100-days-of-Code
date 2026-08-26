include<stdio.h>
int main()
{
int n;
int rev=0;
printf("Enter a number to reverse:");
scanf("%d",&n);
int cp=n;
while(cp>0)
{
rev=(rev*10) + (cp%10);
cp=cp/10;
}
if (rev==n)
printf("Entered number is palindrome \n");
else 
("Entered number is not palindrome \n")
return 0;
}