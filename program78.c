//Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main()
{
 int n,i,j;
 printf("Enter number of rows and coloumn of array:");
 scanf("%d",&n);
 int arr[n][n];
 printf("Enter the values in array:\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
  scanf("%d",&arr[i][j]);
  }
 }
 int sum=0;
 
	 for(i = 0; i < n ;i++)
    {
      sum=sum+arr[i][i];
    }
 printf("Sum of entered matrix main diagonal is =%d \n",sum);
 return 0;
}