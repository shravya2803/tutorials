#include<stdio.h>
void main()
{
    int arr1[5],arr2[5],temp;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d)\n",i+1);
        printf("1\n");
        scanf("%d",&arr1[i]);
        printf("2\n");
        scanf("%d",&arr2[i]);
    }
    printf("before\n");
    printf("array 1\n");
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d\t",arr1[i]);
    }
    printf("\narray 2\n");
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d\t",arr2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    printf("\nafter\n");
    printf("array 1\n");
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d\t",arr1[i]);
    }
    printf("\narray 2\n");
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d\t",arr2[i]);
    }
}