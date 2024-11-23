# include <stdio.h>
void main()
{
    int n,i;
    printf("Please enter the number that you want to enter\n");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Please enter the number that you want\n");
        scanf("%d",&num[i]);
    }
    int max1=num[0],max2=-1;
    for(i=0;i<n;i++)
    {
        if (max1<num[i])
        {
            max2=max1;
            max1=num[i];
        }
        else if (max1>num[i]&& max2<num[i])
        {
            max2=num[i];
        }
    }
    printf("Your max no is %d\n",max1);
     printf("Your second max no is %d\n",max2);
}
