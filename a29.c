# include<stdio.h>
void main()
{
    int number,newnumber=0,orignalnumber;
    orignalnumber=number;
    printf("Please enter the no\n");
    scanf("%d",&number);
    while (number!=0)
    {
        newnumber=newnumber+(number%10);
        number=number/10;
        newnumber=newnumber*10;
    }
    newnumber=newnumber/10;
    if(newnumber==orignalnumber)
    {
        printf("your number is 'PALINDROM'\n");
    }
    else
    {
        printf("your number is not a 'PALINDROM'\n");
    }
}