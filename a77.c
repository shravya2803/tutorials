//program on PALINDROME
#include<stdio.h>
void palidrome(int n);
int main()
{
    /* code */
    int n;
    //taking the input from user
    printf("Enter the number\n");
    scanf("%d",&n);
    //declear the function
    palidrome(n);
    return 0;
}
//making function
void palidrome(int n)
{
    int sum=0,orginalNum;
    orginalNum=n;
    while (n>0)
    {
        /* code */
        sum=sum+n%10;
        n=n/10;
        sum=sum*10;
    }
    if(sum==orginalNum)
    {
        printf("the number is palidrome\n");
    } 
    else
    {
        printf("the is not a palidrome\n");
    }
}
