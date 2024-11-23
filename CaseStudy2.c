#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    long long candies[N+1];
    for(int i = 0; i <= N; i++) {
        candies[i] = 0;
    }

    for(int i = 0; i < M; i++) {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);
        candies[a] += k;
        if(b+1 <= N) {
            candies[b+1] -= k;
        }
    }

    long long totalCandies = 0;
    long long currentCandies = 0;
    for(int i = 1; i <= N; i++) {
        currentCandies += candies[i];
        totalCandies += currentCandies;
    }

    long long averageCandies = totalCandies / N;
    printf("%lld\n", averageCandies);

    return 0;
}
