# include<stdio.h>
void main()
{
    int x=5;
    for (int i=1;i<=x;i++)
    {
         for(int j=0;j<i-1;j++)
        {
            printf("0");
        }
        printf("1");
         for(int j=x-i-1;j>=0;j--)
        {
            printf("0");
        }
        printf("\n");
    }
}