#include<stdio.h>
int main()
{
    /* code */
    int arr[3][3],temp;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("(%d,%d)\nplease enter the number\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* code */
            for(int k=j+1;k<3;k++)
            {
                if(arr[i][j]<arr[i][k])
                {
                    temp=arr[i][j];
                    arr[i][j]=arr[i][k];
                    arr[i][k]=temp;
                }
            }
        }
        
    }
    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* code */
            for(int k=j+1;k<3;k++)
            {
                if(arr[j][i]<arr[k][i])
                {
                    temp=arr[j][i];
                    arr[j][i]=arr[k][i];
                    arr[k][i]=temp;
                }
            }
        }
        
    }
    for (int i=0;i<3;i++)
    {
        for (int j = 0; j<3; j++)
        {
            /* code */
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("%d is the min value\n",arr[2][2]);
    printf("%d is the max value\n",arr[0][0]);
    return 0;
}
