#include <stdio.h>

float calculateCommission(float sales) {
    float commission;
    if (sales <= 500) {
        commission = sales * 0.05;
    } else if (sales <= 2000) {
        commission = 35 + (sales - 500) * 0.10;
    } else if (sales <= 5000) {
        commission = 185 + (sales - 2000) * 0.12;
    } else {
        commission = sales * 0.125;
    }
    return commission;
}

int main() {
    float sales;
    printf("Enter sales amount: ");
    scanf("%f", &sales);
    float commission = calculateCommission(sales);
    printf("The commission is: Rs. %.2f\n", commission);
    return 0;
}
