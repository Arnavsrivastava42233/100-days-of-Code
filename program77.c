//Check if the elements on the diagonal of a matrix are distinct.
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
 int false=0;
 for(i=0,j=m-1;i<n,j>=0;i++,j--)
 {
 
  if(arr[i][j]==arr[j][i])
  {
   if(i!=j)
   {	  
    false=false+1;
    break;
   }
  }
 
 }
 printf("false=%d\n",false);
 if(false<0)
 {
	 for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < m; j++)
        {
            if(arr[i][i] == arr[j][j])
            {
                false = 1;
                break;
            }
        }

        if(false == 1)
            break;
    }
 }
 if(false>0)
 printf("Entered matrix diagonal not distinct\n");
 else
 printf("Entered matrix diagonal distinct\n");
 return 0;
 
}