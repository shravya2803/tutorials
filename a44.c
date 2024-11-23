#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200) 
    {
        bill = units * 0.50;
    } 
    else if (units <= 400) 
    {
        bill = 100 + (units - 200) * 0.65;
    } 
    else if (units <= 600) 
    {
        bill = 230 + (units - 400) * 0.80;
    } 
    else 
    {
        bill = 425 + (units - 600) * 1.25;
    }

    printf("The total electricity bill is: Rs %.2f\n", bill);

    return 0;
}
