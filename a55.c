#include<stdio.h>
void main()
{
    int num[10],numOdd=0,numEven=0;
    for(int i=0;i<10;i++)
    {
        printf("please enter the number\n");
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            numEven++;
        }
        else
        {
            numOdd++;
        }
    }
    printf("no of odd numder are %d\n",numOdd);
    printf("no of even numder are %d\n",numEven);
}