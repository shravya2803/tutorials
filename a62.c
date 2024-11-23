# include<stdio.h>
int main()
{
    /* code */
    int arr[5],temp;
    for(int i=0;i<5;i++)
    {
        printf("enter the number to add in array\n");
        scanf("%d",&arr[i]);
    }
    printf("\nbefore\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<2;i++)
    {
        temp=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=temp;
    }
    printf("\nafer\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
