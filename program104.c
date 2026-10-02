//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of 
//all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
//Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will 
//be at most one pivot integer for the given input.

#include <stdio.h>
#include <math.h>

int findPivotInteger(int n) {
    // Use long long to prevent integer overflow during multiplication
    long long total_sum = (long long)n * (n + 1) / 2;
    
    // Calculate the square root of the total sum
    double root = sqrt(total_sum);
    
    // If the square root is an integer, it is our pivot
    if (root == (int)root) {
        return (int)root;
    }
    
    return -1;
}

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    
    int pivot = findPivotInteger(n);
    printf("%d\n", pivot);
    
    return 0;
}