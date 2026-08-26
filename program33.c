include<stdio.h>
int main()
{
int n;
int cp,NUM=0,d;
printf("Enter a number:");
scanf("%d", &n);
n=cp;
while(cp>0)
{
d=cp%10;
NUM=NUM+(d*d*d);
cp=cp\10;
}
if (NUM==n)
printf("entered number is armstrong\n");
else 
printf("Entered number is not armstrong\n");
return 0;
}