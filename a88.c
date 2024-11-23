#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int i;

    // Copy elements from arr1 to arr2 using pointers
    for (i = 0; i < 5; i++) {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }

    // Print the copied array
    printf("Copied array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}