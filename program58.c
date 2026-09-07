//Find the maximum and minimum element in an array.

#include<stdio.h>
int main()
{ 
 int n;
 int i;
 printf("Enter the size of array:");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the values in array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 int maximum=arr[0]; 
 int minimum=arr[0];
 for(i=0;i<n;i++)
 {
 if(maximum < arr[i])
 maximum=arr[i];
 }
 for(i=0;i<n;i++)
 {
 if(minimum > arr[i])
 minimum=arr[i];
 }
 printf("Maximum value in array is = %d\n", maximum);
 printf("Minimum value in array is = %d\n", minimum);
 return 0;
 }