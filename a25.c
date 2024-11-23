# include<stdio.h>
void main()
{
    int number,ans;
    printf("Please enter the number that you want to print\n");
    scanf("%d",&number);
    for (int i=1;i<=10;i++)
    {
        ans=number*i;
        printf("%d*%d=%d\n",number,i,ans);
    }
}
