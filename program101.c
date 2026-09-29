//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the 
//sorted array might be repeated. You need to print the first and last occurrence of the target and print the 
//index of first and last occurrence. Print -1, -1 if the target is not present.
#include<stdio.h>
int main()
{
 int n,k,i,f=0,l=0;
 printf("Enter the size of array:");
 scanf("%d",&n);
 int nums[n];
 printf("nums = ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&nums[i]);
 }
 printf("Target = ");
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
  if(k==nums[i])
  {
   if(f>0)
    l=i;
   else
    f=i;   
  }
 }
 
 if(f==0)
 {
  printf("-1 -1 \n");
 }
 printf("%d %d",f,l);
}