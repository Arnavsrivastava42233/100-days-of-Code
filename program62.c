//Reverse an array without taking extra space
#include<stdio.h>
int main()
{
 int n,i,temp,first,last;
 printf("Enter size of array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter values of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0,first=0,last=n-1;i<n;i++)
 {
 if(first<last)
 {
  temp=arr[first];
  arr[first]=arr[last];
  arr[last]=temp;
  }
  else
  break;
  first=first+1;
  last=last-1;
 }
 printf("Elemnt of array are \n");
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
}