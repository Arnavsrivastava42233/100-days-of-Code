//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. 
//The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume 
//exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. 
//If no solution exists, print "-1 -1".
#include<stdio.h>
int main()
{
 int n,i,j,k,sum=0;
 printf("Enter the size of array:");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the values in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter the target:");
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   sum=0; 
   if(i!=j)
   {
     sum=arr[i]+arr[j];
   }
	if(sum==k)
	 break;
   }
   if(sum==k)
   break;
  }
  printf("%d %d\n",i,j);
  return 0;
} 