//Write a program to print the following pattern:
//1
//12
//123
//1234
//12345
#include <stdio.h>

int main()
{
    int i, j,k;

    for(i = 1; i <= 5; i++)
    {
		k=1;
        for(j = 1; j <= i; j++)
        {
            printf("%d",k);
			k=k+1;
        }
        printf("\n");
		
    }

    return 0;
}