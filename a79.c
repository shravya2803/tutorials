#include<stdio.h>
void interchange2Number(int a,int b);
int main()
{
    /* code */
    int a,b;
    // taking input from user
    printf("1):-\t");
    scanf("%d",&a);
    printf("2):-\t");
    scanf("%d",&b);
    interchange2Number(a,b);
    return 0;
}
void interchange2Number(int a,int b)
{
    printf("before inter change\na=%d\tb=%d",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nafter inter change\na=%d\tb=%d",a,b);
}
