#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter numbers (negative number to end):\n");
    while (1) {
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        sum += num;
    }
    printf("Sum of entered numbers: %d\n", sum);
    return 0;
}
