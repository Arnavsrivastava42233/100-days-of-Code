//Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=9;i++)
{
for(j=1;j<=i;j++)
{
if(i%2!=0)
printf("*");
}
printf("\n");
} 
printf("\n");
for(i=7;i>=1;i--)
{
for(j=i;j>=1;j--)
{
if(i%2!=0)
printf("*");
}
printf("\n");
}
return 0;
}