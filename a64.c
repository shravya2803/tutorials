#include<stdio.h>
int main()
{
    /* code */
    int arr[3][3],sum[]={0,0,0};
    //taking input
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("(%d,%d)\nplease enter the number\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    //getting sum
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i]=sum[i]+arr[j][i];
        }
    }
    //printing the sum
    for (int i = 0; i <3; i++)
    {
        /* code */
        printf("%d\n",sum[i]);
    }
    return 0;
}
