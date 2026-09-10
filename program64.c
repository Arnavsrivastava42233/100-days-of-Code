//Find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main()
{
int i,j,n,frequency=1,temp=0,value;
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
	  temp=1;
   for(j=i+1;j<n;j++)
   {
    if(arr[i]==arr[j])
	temp=temp+1;
   }
   if(frequency<temp)
   {
    frequency=temp;
	value=arr[i];
   }
  }
  printf("Digit %d has greatest frequency of %d\n",value,frequency);
  return 0;
}