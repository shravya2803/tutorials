#include<stdio.h>
void main()
{
    int arr1[10],arr2[10],arr3[10];
    for(int i=0;i<10;i++)
    {
        printf("%d\n",i+1);
        scanf("%d",&arr1[i]);
        scanf("%d",&arr2[i]);
        arr3[i]=arr1[i]+arr2[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr3[i]);
    }
}