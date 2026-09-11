//Delete an element from an array.
#include<stdio.h>
int main()
{
int position,n,i;
 printf("Enter the size of array:");
 scanf("%d",&n);
 int arr[100];
 printf("Enter the numbers in array\n");
 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 printf("Enter the position to delete a value\n");
 scanf("%d",&position);
 for(i=position;i<n;i++)
 {
 arr[i-1]=arr[i];
 }
  printf("Elements of array are: \n");
 for(i=0;i<n-1;i++)
 {
 printf("%d ", arr[i]);
 }
 return 0;
}