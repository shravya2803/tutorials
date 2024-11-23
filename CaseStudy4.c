#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

int main() {
    int N;
    scanf("%d", &N);

    int gemElements[ALPHABET_SIZE] = {0};
    char rock[101];

    for (int i = 0; i < N; i++) {
        int present[ALPHABET_SIZE] = {0};
        scanf("%s", rock);
        
        int length = strlen(rock);
        for (int j = 0; j < length; j++) {
            present[rock[j] - 'a'] = 1;
        }
        
        for (int j = 0; j < ALPHABET_SIZE; j++) {
            gemElements[j] += present[j];
        }
    }

    int gemCount = 0;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (gemElements[i] == N) {
            gemCount++;
        }
    }

    printf("%d\n", gemCount);
    return 0;
}
