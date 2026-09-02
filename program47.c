//Write a program to print the following pattern:
//*
//**
//***
//****
//*****
#include <stdio.h>

int main()
{
    int i, j,k=1;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
		k=k+1;
    }

    return 0;
}