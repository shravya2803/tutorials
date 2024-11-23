# include<math.h>
# include<stdio.h>
void main ()
{
    int y,x,n;
    printf("please enter the value of x,n\n");
    scanf("%d\n%d",&x,&n);
    if (n==1)
    {
        y=1+x;
        printf("%d",y);
    }
    else if (n==2)
    {
        y=1+(x/2);  
        printf("%d",y);
    }
    else if (n==3)
    {
        y=1+pow(x,3);
        printf("%d",y);
    }
    else if (n>3||n<1)
    {
        y=1+n*x;
        printf("%d",y);
    }

}