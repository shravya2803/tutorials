#include<stdio.h>
void evenOdd(int n);
int main()
{
    /* code */
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    evenOdd(n);
    return 0;
}
void evenOdd(int n)
{
    if(n%2==0)
    {
        printf("the number is a even number\n");
    }
    else
    {
        printf("the number is a odd number\n");
    }
}
