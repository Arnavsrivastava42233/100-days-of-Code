//Insert an element in an array at a given position.
#include<stdio.h>
int main()
{
 int position,n,i,j,value;
 printf("Enter the size of array:");
 scanf("%d",&n);
 int arr[100];
 printf("Enter the numbers in array\n");
 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 printf("Enter the position to insert a value\n");
 scanf("%d",&position);
 printf("Enter the value to insert\n");
 scanf("%d",&value);
 for(i=n;i>=position-1;i--)
 {
   arr[i]=arr[i-1];
 }
 arr[position-1]=value;
 printf("Elements of array are: \n");
 for(i=0;i<=n;i++)
 {
 printf("%d ", arr[i]);
 }
 return 0;
}