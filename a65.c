#include<stdio.h>
int main()
{
    /* code */
    int arr[3][3],temp;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("(%d,%d):",i+1,j+1);
            scanf("\n%d ",&arr[i][j]);
        }
        
    }
    printf("\nBefore\n");
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
     printf("\nAfter\n");
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
