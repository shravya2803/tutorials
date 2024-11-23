#include<stdio.h>
void main()
{
    int n,sumodd=0,sumeven;
    printf("Please enter the no\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i%2==0){
            sumeven+=i;
        }
        else if(i%2!=0){
           sumodd+=i;
        }
    }
    printf("sum of odd no is %d\n",sumodd);
    printf("sum of even no is %d\n",sumeven);
}