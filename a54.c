#include<stdio.h>
void main()
{
    int sum=0,num[10];
    for(int i=0;i<10;i++)
    {
        printf("PLease enter the number\n");
        scanf("%d",&num[i]);
        sum += num[i];
    }
    printf("%d",sum);
}