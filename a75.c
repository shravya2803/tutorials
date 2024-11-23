//program on student mark sheet 
#include<stdio.h>
int main()
{
    int mark[4][10],total[10],high[3][10];
    //for loop for taking input and print total
    for (int i = 0; i < 10; i++)
    {
        int j,k,sum=0;
    /* code */
    printf("%d\n",i+1);
    for (j = 1; j < 4; j++)
    {
        /* code */
        printf("s%d\t",j);
        scanf("%d",&mark[j][i]);
    }
        for(int w=1;w < 4;w++)
        {
            sum=sum+mark[w][i];
        }
        total[i]=sum;
        printf("total is equal to %d\n",total[i]);
    }
    //for loop for highest mark in each subject
    for (int i=1;i<4;i++)
    {
        int max=0,roll;
        for(int j=0;j<10;j++)
        {
            if(max<mark[i+1][j])
            {
                max=mark[i+1][j];
                roll=j;
            }
        }
        printf("the highest marks in subject %d obtain is %d and by %d\n",i,max,roll);
    }
    for(int i=0;i<10;i++)
    {
        int max=0,roll;
        if(max<total[i])
        {
            max=total[i];
            roll=i+1;
        }
    }
   }
