//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of 
//size k moving from left to right. Print the maximum elements for each window separated by spaces as output
#include<stdio.h>
int main()
{
 int n,i,j,k,max=0;
 printf("Enter the size of array:");
 scanf("%d", &n);
 int arr[n],pro[n];
 printf("Enter the values in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("enter the size of subarray:");
 scanf("%d",&k);
 for(i=0;i<n-(k-1);i++)
 {
	 max=arr[i];
  for(j=i;j<i+k;j++)
  {
   if(max<arr[j])
     max=arr[j];
  }
  printf("%d ",max);
 }
 return 0;
} 