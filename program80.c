//Multiply two matrices.
#include<stdio.h>
int main()
{
 int n1,n2,i,j,m1,m2,k;
 printf("Enter number of rows and coloumns of array one and two:");
 scanf("%d%d%d%d",&n1,&m1,&n2,&m2);
 
 int arr1[n1][m1];
 printf("Enter the values in array1\n");
 for(i=0;i<n1;i++)
 {
  for(j=0;j<m1;j++)
  {
  scanf("%d",&arr1[i][j]);
  }
 }
 
 
 int arr2[n2][m2];
 printf("Enter the values in array2\n");
 for(i=0;i<n2;i++)
 {
  for(j=0;j<m2;j++)
  {
  scanf("%d",&arr2[i][j]);
  }
 }
 int result[n1][m2];
 for(int i = 0; i < n1; i++) 
    {
        for(int j = 0; j < m2; j++) 
        {
			result[i][j]=0;
            for(int k = 0; k < m1; k++) 
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
	printf("\nResultant Matrix (%dx%d):\n", n1, m2);
    for (int i = 0; i < n1; i++) 
    {
        for (int j = 0; j < m2; j++) 
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}