//Search for an element in an array using linear search
#include<stdio.h>
int main()
{
 int n,i,value,found;
 printf("Enter size of array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter values of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter value to search in array\n");
 scanf("%d", &value);
 for(i=0;i<n;i++)
 {
  if(arr[i]==value)
  {
  found=1;
  break;
  }
 }
 if(found==1)
   printf("Element found in array at index %d\n",i);
 else
   printf("Element not found in array\n"); 
 return 0;
}