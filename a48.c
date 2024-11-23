# include<stdio.h>
void main()
{
    int x=5;
    for (int i=1;i<=x;i++)
    {
        for(int j=x-i;j>=0;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}