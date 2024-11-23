#include<stdio.h>
//function for wheather a number is a prime or not
void evenOrOdd(int n)
{
    int x;
    //for loop for finding whether n is prime or not
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            x=i;
        }
    }
    //condition for states that whether the n is prime or not
    if(n%x==0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
}
int main()
{
    /* code */
    int n;
    //taking input from user
    printf("enter the number\n");
    scanf("%d",&n);
    //calling the function
    evenOrOdd(n);
    return 0;
}
