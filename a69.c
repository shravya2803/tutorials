#include<stdio.h>
int main()
{
    /* code */
    int arr[10],n,temp=-1;
    printf("enter the inputs\n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d:-",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nenter the number you want to find\n");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            temp=i;
        }
    }
    if(temp!=-1)
    {
        printf("%d is the rank of the number you want\n",temp+1);
    }
    else
    {
        printf("the number you want to find does exists in the array\n");
    }
    return 0;
}
