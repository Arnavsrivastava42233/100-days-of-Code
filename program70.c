//Rotate an array to the right by k positions.
#include<stdio.h>
int main()
{
 int n,i,j,k,position,point;
 printf("Enter the size of array:");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the values in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter position to rotate: ");
 scanf("%d",&position);
 point=arr[position];
 for(i=n-2;i>=0;i--)
 {
 if(arr[n-1]==point)
  break;
  k=arr[n-1];
  for(j=n-2;j>=0;j--)
  {
  arr[j+1]=arr[j];
  }
  arr[0]=k;
 }
  printf("Rotated array: \n");
 for(i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 return 0;
}