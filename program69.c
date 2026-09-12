//Find the second largest element in an array.
#include<stdio.h>
int main()
{ 
 int n;
 int i,secondlargest=0,maximum;
 printf("Enter the size of array:");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the values in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
  maximum=0;
 for(i=0;i<n;i++)
 {
 if(maximum < arr[i])
 {
 secondlargest=maximum;
 maximum=arr[i];
 }
 }
 printf("second largest value in array is = %d\n", secondlargest);
}