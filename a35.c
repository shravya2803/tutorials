# include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Please enter the number\n");
    scanf("%d",&n);
    while (n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("your sum of all digits is %d\n",sum);
}