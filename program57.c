//Find the sum of array elements
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
int sum=0;
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
printf("Sum of entered element in array is = %d\n", sum);
return 0;
}