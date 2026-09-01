#include <stdio.h>

int main()
{
    int n, i;
    float num = 2, den = 3;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + num / den;
        num = num + 2;
        den = den + 4;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}