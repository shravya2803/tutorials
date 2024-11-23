#include<stdio.h>
#include<math.h>
void main()
{
    double x1,x2,n1,n2,num1=0,num2=0,num;
    scanf("%lf",&n1);
    for(int i=n1-1;i>=0;i--)
    {
        scanf("%lf",&x1);
        num1 =num1+(x1*pow(16,i));
    }
    scanf("%lf",&n2);
    for(int j=1;j<=n2;j++)
    {
        scanf("%lf",&x2);
        num2 =num2+(x2/pow(16,j));
    }
    num=num1+num2;
    printf("%lf",num);
}