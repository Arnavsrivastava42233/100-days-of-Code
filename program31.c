include<stdio.h>
int main()
{
int n;
printf("Enter value of n: ");
scanf("%d",&n);
int binary=0,rev=0;
if(n==0)
printf("Entered number binary= %d\n" , binary);
else
{
 int cp=n;
 while(cp>0)
  {
   binary= (binary*10) + (cp%2);
   cp=cp/2;
  }
   while(binary>0)
  {
  rev=(rev*10) + (binary%10);
  binary=binary/10;
  }
 printf("Entered number binary is= %d\n", rev);
}
return 0;
}