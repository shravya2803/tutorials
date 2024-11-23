#include <stdio.h>

// Function to find the pivot element in a rotated sorted array
int findPivotElem(int *arr, int left, int right) {
    // Base cases for recursion
    if (right < left) return -1;
    if (right == left) return left;

    // Calculate mid element
    int mid = (left + right) / 2;

    // Check if the mid element is the pivot element
    if (mid < right && arr[mid] > arr[mid + 1]) return mid;
    if (mid > left && arr[mid] < arr[mid - 1]) return mid - 1;

    // Recursively search for the pivot element in the left or right sub-array
    if (arr[left] >= arr[mid]) {
        return findPivotElem(arr, left, mid - 1);
    } else {
        return findPivotElem(arr, mid + 1, right);
    }
}

// Main function
int main() {
    int arr[] = {14, 23, 7, 9, 3, 6, 18, 22, 16, 36};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Displaying the given array
    printf("The given array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Finding and displaying the pivot element
    int pivotIndex = findPivotElem(arr, 0, n - 1);
    if (pivotIndex != -1) {
        printf("The Pivot Element in the array is: %d\n", arr[pivotIndex + 1]);
    } else {
        printf("No pivot element found.\n");
    }

    return 0;
}
