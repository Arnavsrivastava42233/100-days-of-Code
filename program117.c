//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is 
//also sorted. Print the merged array.
#include<stdio.h>
int main()
{
 int n1,n2,i,j,temp;
 printf("Enter the size of 1st array:");
 scanf("%d", &n1);
 int arr1[n1];
 printf("Enter the values in array\n");
 for(i=0;i<n1;i++)
 {
  scanf("%d",&arr1[i]);
 }
 
 printf("Enter the size of 2nd array:");
 scanf("%d", &n2);
 int arr2[n2];
 printf("Enter the values in array\n");
 for(i=0;i<n2;i++)
 {
  scanf("%d",&arr2[i]);
 }
 
 int narr[n1+n2];
 for(i=0;i<n1;i++)
 {
  narr[i]=arr1[i];
 }
  for(i=0;i<n2;i++)
 {
  narr[n1+i]=arr2[i];
 }
 
 for (i = 0; i < (n1+n1) - 1; i++)
	 {
        for (j = 0; j < (n1+n2) - i - 1; j++) 
		{
            if (narr[j] > narr[j + 1])
			{
                temp = narr[j];
                narr[j] = narr[j + 1];
                narr[j + 1] = temp;
            }
        }
    }
	
	for(i=0;i<n1+n2;i++)
	{
	 printf("%d,",narr[i]);
	}
	return 0;
}	
	