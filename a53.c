# include<stdio.h>
void main()
{
    int x=5;
    for(int i=1;i<=5;i++)
    {
       for (int k=5-i;k>0;k--)
       {
        printf(" ");
       }
       for (int j=1;j<=i;j++)
       {
        printf("*");
       }
       for (int k=i-1;k>0;k--)
       {
        printf("*");
       }
        printf("\n");
    }
     for(int i=4;i>0;i--)
    {
       for (int k=5-i;k>0;k--)
       {
        printf(" ");
       }
       for (int j=1;j<=i;j++)
       {
        printf("*");
       }
       for (int k=i-1;k>0;k--)
       {
        printf("*");
       }
        printf("\n");
    }
}
