//Add two matrices.
#include<stdio.h>
int main()
{
 int n,i,j,m;
 printf("Enter number of rows and coloumn of array:");
 scanf("%d%d",&n,&m);
 int arr1[n][m];
 printf("Enter the values in array1\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  scanf("%d",&arr1[i][j]);
  }
 }
 
 
 int arr2[n][m];
 printf("Enter the values in array2\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  scanf("%d",&arr2[i][j]);
  }
 }
 
 printf("the values in array1:\n");
  for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  printf("%d ", arr1[i][j]);
  }
  printf("\n");
 }
 
 printf("the values in array2:\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  printf("%d ", arr2[i][j]);
  }
  printf("\n");
 }
 
 printf("the values in array3 after adding is:\n");
 int arr3[n][m];
  for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  arr3[i][j]=arr1[i][j]+arr2[i][j];
  printf("%d ", arr3[i][j]);
  }
  printf("\n");
 }
}