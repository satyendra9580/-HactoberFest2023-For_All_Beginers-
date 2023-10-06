#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the target is found, return its index
        if (arr[mid] == target)
            return mid;

        // If the target is greater, search the right half
        if (arr[mid] < target)
            left = mid + 1;
        
        // If the target is smaller, search the left half
        else
            right = mid - 1;
    }

    // If the target is not in the array, return -1
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");

    return 0;
}
