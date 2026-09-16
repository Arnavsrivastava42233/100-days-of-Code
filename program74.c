//Find the transpose of a matrix.
#include<stdio.h>
int main()
{
 int n,i,j,m,Sum=0;
 printf("Enter number of rows and coloumn of array:");
 scanf("%d%d",&n,&m);
 int arr[n][m];
 printf("Enter the values in array\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  scanf("%d",&arr[i][j]);
  }
 }
 printf("Matrix before transpose\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  printf("%d ", arr[i][j]);
  }
  printf("\n");
 }

 int arr1[m][n];
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
  arr1[j][i]=arr[i][j];
 }
 }
 printf("Matrix after transpose\n");
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  printf("%d ", arr1[i][j]);
  }
  printf("\n");
 }
 return 0;
}