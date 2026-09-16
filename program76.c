//Check if a matrix is symmetric.
#include<stdio.h>
int main()
{
 int n,i,j,m,f=0;
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
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  if(arr[i][j]!=arr[j][i])
  f=f+1;
  }
 }
 
 if(f>0)
 printf("Entered number is not symmetric\n");
 else
 printf("Entered number is symmetric\n");
 
 return 0;
}