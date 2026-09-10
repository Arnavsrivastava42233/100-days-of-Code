//Merge two arrays.
#include<stdio.h>
int main()
{
 int i,j,k,n1,n2,temp;
 printf("Enter size of 1st array:");
 scanf("%d",&n1);
 int arr1[n1];
 printf("Enter values of array 1:\n");
 for(i=0;i<n1;i++)
 {
  scanf("%d",&arr1[i]);
 }
 printf("Enter size of 2nd array:");
 scanf("%d",&n2);
 int arr2[n2];
 printf("Enter values of array 2 :\n");
 for(i=0;i<n2;i++)
 {
  scanf("%d",&arr2[i]);
 }
 int arr3[n1+n2];
 for(i=0;i<n1;i++)
 {
  arr3[i]=arr1[i];
 }
 for(i=n1,j=0;j<n2;i++,j++)
 {
  arr3[i]=arr2[j];
 }
 
   for(i = 0; i < n1 + n2 - 1; i++)
    {
        for(j = 0; j < n1 + n2 - 1 - i; j++)
        {
            if(arr3[j] > arr3[j + 1])
            {
                temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
	 printf("Merged and sorted array is:\n");

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}