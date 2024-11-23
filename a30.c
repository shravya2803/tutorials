# include<stdio.h>
void main()
{
    int number,newnumber=0;
    printf("Please enter the no\n");
    scanf("%d",&number);
    while (number!=0)
    {
        newnumber=newnumber+(number%10);
        number=number/10;
        newnumber=newnumber*10;
    }
    newnumber=newnumber/10;
    printf("your reverse number is %d\n",newnumber);
}