# include<stdio.h>
void main()
{
    int n,x=0;
    printf("please enter the numbers that you want\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        x=x+2;
        printf("%d\n",x);
    }
}