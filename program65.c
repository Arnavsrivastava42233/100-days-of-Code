//Search in a sorted array using binary search.
#include<stdio.h>
int main()
{
 int i,n,value,index;
 printf("Enter size of array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter values of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter value to search%d\n", value);
 scanf("%d",&value);
 for(i=0;i<n;i++)
 {
 if(arr[i]==value)
   {index=i;
   break;
   }
 }
 printf("Entered value is found at index number %d\n",index);
 return 0;
}