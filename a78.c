//making a program on amstrong
#include<stdio.h>
#include<math.h>
void amstrong(int n);
int main()
{
    /* code */
    int n;
    // taking input from user
    printf("enter the number\n");
    scanf("%d",&n);
    amstrong(n);
    return 0;
}
void amstrong(int num)
{
    int originalNum, remainder, n = 0;
    float result = 0.0;
    originalNum = num;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

}
