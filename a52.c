# include<stdio.h>
void main()
{
    int x=5;
    for(int i=1;i<=5;i++)
    {
       for (int j=1;j<=i;j++)
       {
        printf("%d",j);
       }
       for (int k=i-1;k>0;k--)
       {
        printf("%d",k);
       }
        printf("\n");
    }
}