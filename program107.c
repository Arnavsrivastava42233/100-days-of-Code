//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element 
//for each element of the array in order of their appearance in the array. Previous greater element of an element 
//in the array is the nearest element on the left which is greater than the current element. If there does not 
//exist next greater of current element, then previous greater element for current element is -1.

#include <iostream>
#include <vector>

using namespace std;

// Function to find previous greater elements using brute force
void findPreviousGreater(const vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Look at all elements to the left of the current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // Stop at the nearest element on the left
            }
        }

        // Print comma-separated output
        cout << prevGreater;
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) {
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Previous Greater Elements: ";
    findPreviousGreater(arr);

    return 0;
}