#include <stdio.h>
#include <stdlib.h>

// Function to multiply two matrices
void multiplyMatrices(int **a, int **b, int **result, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    // Allocate memory for matrices
    int **a = (int **)malloc(r1 * sizeof(int *));
    int **b = (int **)malloc(r2 * sizeof(int *));
    int **result = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++) {
        a[i] = (int *)malloc(c1 * sizeof(int));
    }
    for (int i = 0; i < r2; i++) {
        b[i] = (int *)malloc(c2 * sizeof(int));
    }
    for (int i = 0; i < r1; i++) {
        result[i] = (int *)malloc(c2 * sizeof(int));
    }

    // Input elements for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply the matrices
    multiplyMatrices(a, b, result, r1, c1, c2);

    // Display the result
    printf("Product of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < r1; i++) {
        free(a[i]);
        free(result[i]);
    }
    for (int i = 0; i < r2; i++) {
        free(b[i]);
    }
    free(a);
    free(b);
    free(result);

    return 0;
}
