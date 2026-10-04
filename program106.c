//Write a program to take an array arr[] of integers as input, the task is to find the next greater element 
//for each element of the array in order of their appearance in the array. Next greater element of an element 
//in the array is the nearest element on the right which is greater than the current element. If there does not 
//exist next greater of current element, then next greater element for current element is -1.
#include <stdio.h>
#include <stdlib.h>

// Function to find the next greater element for each array element
void findNextGreaterElement(const int arr[], int n, int result[]) {
    // Dynamically allocate memory for the stack
    int *stack = (int *)malloc(n * sizeof(int));
    int top = -1;

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements from the stack that are smaller than or equal to current element
        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }

        // If stack is empty, no greater element exists on the right
        if (top == -1) {
            result[i] = -1;
        } else {
            result[i] = stack[top];
        }

        // Push current element onto the stack
        stack[++top] = arr[i];
    }

    free(stack);
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    int *result = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findNextGreaterElement(arr, n, result);

    printf("\nNext Greater Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], result[i]);
    }

    free(arr);
    free(result);

    return 0;
}