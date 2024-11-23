#include<stdio.h>
int main()
{
    int a,b,k=0,j=0,sum1=0,sum2=0;
    scanf("%d",&a);
    scanf("%d",&b);
    int arr[a];
    int arr2[b];
    for(int i=1;i<a;i++)
    {
        if (a%i==0)
        {
            arr[k]=i;
            k++;
        }
    }
    for(int i=1;i<b;i++)
    {
        if (b%i==0)
        {
            arr2[j]=i;
            j++;
        }
    }
    for(int i=0;i<k;i++)
    {
        sum1=sum1+arr[i];
    }
    for(int i=0;i<j;i++)
    {
        sum2=sum2+arr2[i];
    }
    printf("%d\n%d\n",sum1,sum2);
    if((sum1/a)==(sum2/b))
    {
        printf("friend\n");
    }
    return 0;
}
