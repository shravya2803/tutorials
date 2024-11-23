#include<stdio.h>
double fact(double n)
{
    for(int i=1;i<=n;i++)
    {
        n=n*i;
    }
    return 0;
}
void main()
{
    int n;
    double sum=0;
    printf("Please enter the number upto which you want to find sum\n");
    scanf("%d",&n);
    for(double i=1;i<=n;i++)
    {
        sum+=(i/fact(i));
    }
    printf("%lf",sum);
}