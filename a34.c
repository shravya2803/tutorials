# include<stdio.h>
void main()
{
    int n,a=1,b=0,sum=0;
    printf("Please enter the no of terms you want to print\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=a+b;
        b=a;
        a=sum;

        printf("%d,",a);
    }
}