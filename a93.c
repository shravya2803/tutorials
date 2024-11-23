#include <stdio.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    while (*str != '\0') {
        if (isspace(*str)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); // gets is deprecated, consider using fgets instead

    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);

    return 0;
}
