#include<stdio.h>
int main()
{
    int arr[10],n,j=0;
    //taking input from user in array
    printf("enter the numbers\n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d):-\t",i+1);
        scanf("%d",&arr[i]);
    }
    //taking the number for finding the occurance
    printf("\nenter the number for which you want to find its occurence\n");
    scanf("%d",&n);
    //finding its occureance
    for(int i=0;i<10;i++)
    {
        if(n==arr[i])
        {
            j++;
        }
    }
    printf("no of the no %d is occur is %d",n,j);
    return 0;
}
