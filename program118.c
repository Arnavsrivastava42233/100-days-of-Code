//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. 
//Print that missing number
#include <stdio.h>
int main() {
    int n;
    
    // Prompt the user for the value of n
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer for n.\n");
        return 1;
    }

    int arr[n];
    int expected_sum = (n * (n + 1)) / 2;
    int actual_sum = 0;

    // Read the array elements and calculate their sum
    printf("Enter %d integers (from 0 to %d, with one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    int missing_number = expected_sum - actual_sum;

    printf("The missing number is: %d\n", missing_number);

    return 0;
}