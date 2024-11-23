#include <stdio.h>
void main ()
{
    int n,x;
    printf("PLease enter the number that you want to find\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf("your number is a composite number \n");
            break;
        }
            x=i;
    }
    if(n%x!=0)
    {
        printf("your no is a prinme number\n");
    }
}
