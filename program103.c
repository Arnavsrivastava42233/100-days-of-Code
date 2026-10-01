//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index 
//is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all 
//the numbers strictly to the index's right. If the index is on the left edge of the array, 
//then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the 
//array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>

int findPivotIndex(int nums[], int size) {
    int total_sum = 0;
    int left_sum = 0;

    // Step 1: Calculate total sum of the array
    for (int i = 0; i < size; i++) {
        total_sum += nums[i];
    }

    // Step 2: Traverse array to find pivot index
    for (int i = 0; i < size; i++) {
        // right_sum is total_sum - left_sum - current element
        int right_sum = total_sum - left_sum - nums[i];

        if (left_sum == right_sum) {
            return i; // Leftmost pivot index
        }

        left_sum += nums[i];
    }

    return -1; // No pivot index found
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[n];
    printf("Enter %d integers separated by spaces:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int pivot = findPivotIndex(nums, n);
    printf("Pivot Index: %d\n", pivot);

    return 0;
}