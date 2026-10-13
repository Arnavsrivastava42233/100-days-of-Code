//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each 
//subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results 
//separated by spaces as output
#include<stdio.h>
int main()
{
 int n,i,j,k,found;
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
  for(j=i;j<i+k;j++)
  {found =0;
   if(arr[j]<0)
   {
    printf("%d ",arr[j]);
	found=1;
    break;
   }
  }
  if(!found)
	printf("0 ");
 }
 return 0;
} 