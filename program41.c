//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, first, last, middle, temp, p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    temp = n;

    while(temp >= 10)
    {
        temp = temp / 10;
        p = p * 10;
    }

    first = temp;

    middle = (n % p) / 10;

    n = last * p + middle * 10 + first;

    printf("After swapping = %d\n", n);

    return 0;
}