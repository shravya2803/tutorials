#include<stdio.h>
void main()
{
    int num[10],numP=0,numN=0,num0=0;
    for(int i=0;i<10;i++)
    {
        printf("please enter the number\n");
        scanf("%d",&num[i]);
        if(num[i]>0)
        {
            numP++;
        }
        else if(num[i]<0)
        {
            numN++;
        }
        else
        {
            num0++;
        }
    }
    printf("no of positive numder are %d\n",numP);
    printf("no of negative numder are %d\n",numN);
    printf("no of zeros are %d\n",num0);
}