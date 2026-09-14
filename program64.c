//Find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main()
{
	 int n, digit, maxCount=0, maxDigit=0;
    int count[10]={0}; 

    printf("Enter an integer: ");
    scanf("%d",&n);

    if(n==0)
        count[0]++;

    while(n!=0)
    {
        digit = n%10;
        count[digit]++;
        n = n/10;
    }

    for(int i=0; i<10; i++)
    {
        if(count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs most frequently is %d, and it occurs %d times.\n", maxDigit, maxCount);

    return 0;
}
