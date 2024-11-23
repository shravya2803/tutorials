#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    while (*str != '\0') {
        char c = tolower(*str);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
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

    int vowelCount = countVowels(str);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
