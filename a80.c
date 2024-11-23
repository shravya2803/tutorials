#include<stdio.h>
void fibonacci(int n)
{
    int a=1,b=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",b);
        sum=a+b;
        b=a;
        a=sum;
      
    }
}
int main()
{
    int n;
    printf("enter the number upto which you want to print fibonacci seri\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
