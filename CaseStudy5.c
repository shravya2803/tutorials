#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(long long x) {
    long long s = (long long)sqrt(x);
    return (s * s == x);
}

// Function to check if a number is a Fibonacci number
int isFibonacci(long long n) {
    // A number is Fibonacci if and only if one or both of (5*n^2 + 4) or (5*n^2 - 4) is a perfect square
    return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        long long N;
        scanf("%lld", &N);

        if (isFibonacci(N)) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }

    return 0;
}
