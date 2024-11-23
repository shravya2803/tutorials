#include <stdio.h>

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    // Prompt user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n]; 
    // Prompt user to enter the elements of the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Find the maximum value in the array
    int max = findMax(arr, n);
    // Print the maximum value
    printf("Maximum value in the array: %d\n", max);
    return 0;
}
