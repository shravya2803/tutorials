#include<stdio.h>
int main()
{
    /* code */
    int arr1[3][3],arr2[3][3],arr[3][3];
    printf("Input for array 1\n");
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("(%d,%d) :",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("\nInput for array 2\n");
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("(%d,%d) :",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
        
    }
    printf("\noutput\n");
     for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            arr[i][j]=arr1[i][j]*arr2[i][j];
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
