#include <stdio.h>

void calculateLengths(const char *str, int *includingSpaces, int *excludingSpaces) {
    *includingSpaces = 0;
    *excludingSpaces = 0;

    while (*str != '\0') {
        (*includingSpaces)++;
        if (*str != ' ') {
            (*excludingSpaces)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int includingSpaces, excludingSpaces;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // gets is deprecated, consider using fgets instead

    calculateLengths(str, &includingSpaces, &excludingSpaces);

    printf("Length including spaces: %d\n", includingSpaces);
    printf("Length excluding spaces: %d\n", excludingSpaces);

    return 0;
}
