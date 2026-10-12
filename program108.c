//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements 
//of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include<stdio.h>
int main()
{
 int n,i,j,mult=1;
 printf("Enter the size of array:");
 scanf("%d", &n);
 int arr[n],pro[n];
 printf("Enter the values in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(j!=i)
   {
    mult=mult*arr[j];
   }
  }
  pro[i]=mult;
  mult=1;
 }
 printf("Array answer is: \n");
 for(i=0;i<n;i++)
 {
  printf("%d ",pro[i]);	 
 }
 return 0;
}