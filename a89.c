#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int originalArray[n], reversedArray[n];

    // Input elements of the original array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &originalArray[i]);
    }

    // Copy elements into the reversed array in reverse order
    for (int i = 0; i < n; i++) {
        reversedArray[i] = originalArray[n - 1 - i];
    }

    // Output the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversedArray[i]);
    }
    printf("\n");

    return 0;
}
