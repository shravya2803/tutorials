# include<stdio.h>
# include<math.h>
void main()
{
    int n,x;
    printf("please enter the numbers that you want\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        x=pow(i,2);
        printf("%d\n",x);
    }
}