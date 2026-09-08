//Count even and odd numbers in an array
#include<stdio.h>
int main()
{
 int i,n,even=0,odd=0;
 printf("Enter size of array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter values of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  if(arr[i]%2==0)
  even=even+1;
  else
  odd=odd+1;
 }
 printf("Total number of even digit in array are=%d\n", even);
 printf("Total number of odd digit in array are=%d\n", odd);
}