#include <stdio.h>

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    printf("Enter the numbers:\n");
    while (t--) {
        long long n;
        scanf("%lld", &n);
        int count = 0;
        long long temp = n;
        while (temp > 0) {
            long long digit = temp % 10;
            if (digit != 0 && n % digit == 0) {
                count++;
                
                printf("%d\n", count);
                
            }
            temp /= 10;
        }
        
    }
    return 0;
}