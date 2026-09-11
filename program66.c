//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main()
{
 int j,i,n,value,index;
 printf("Enter size of array:");
 scanf("%d",&n);
 n=n+1;
 int arr[n];
 printf("Enter values of array\n");
 for(i=0;i<n-1;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter value to insert in array:");
 scanf("%d",&value);
 for(i=0;i<n;i++)
 {
  if(arr[i]>value)
  break;
 }
 for(j=n-1;j>i;j--)
 {
  arr[j]=arr[j-1];
  
 }
 arr[j]=value;
 printf("Array after insertion is:\n");
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 return 0;
}