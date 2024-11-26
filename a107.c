#include <stdio.h>
#include <math.h>

int flip(int num, int n) {
    int last_n_digits = num % ((int)pow(10, n));
    int remaining_digits = num /( (int)pow(10, n) );
    int flipped_last_n_digits = 0;
    while (last_n_digits != 0) {
        flipped_last_n_digits = flipped_last_n_digits * 10 + last_n_digits % 10;
        last_n_digits /= 10;
    }
    return remaining_digits * (int)pow(10, n) + flipped_last_n_digits;
}

int main() {
    printf("Enter a number: ");
    int num ; 
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    int n; 
     scanf("%d", &n);
    printf("Original number: %d\n", num);
    printf("Flipped number: %d\n", flip(num, n));
    return 0;
}