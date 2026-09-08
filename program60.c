//Count positive, negative, and zero elements in an array
#include<stdio.h>
int main()
{
 int i,n,positive=0,negative=0,zero=0;
 printf("Enter size of array:");
 scanf("%d",&n);
 int arr[n];
 printf("Enter values of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
 if(arr[i]>0)
 positive=positive+1;
 else if(arr[i]<0)
 negative=negative+1;
 else
 zero=zero+0; 
 }
 printf("Total number of positive elements in array=%d\n",positive);
 printf("Total number of negative elements in array=%d\n",negative);
 printf("Total number of zero elements in array=%d\n",zero);
 return 0;
 
}