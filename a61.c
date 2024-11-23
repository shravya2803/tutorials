#include<stdio.h>
int main()
{
    int arr[5],temp;
    for(int i=0;i<5;i++)
    {
        printf("enter the number\n");
        scanf("%d",&arr[i]);
    }
    printf("\nbefore\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nafter\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
