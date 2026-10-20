//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. 
//Try to find the result in one single iteration.
#include<stdio.h>
int main()
{
 int n,i,check=0,k,j;
 printf("Enter the size of array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the value of array:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(arr[j]==arr[i])
   {
   k=arr[i];
   check=1;
   break;
   }
  }
  if(check==1)
  break;
 }
 printf("%d\n",k);
 return 0;
}