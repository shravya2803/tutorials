#include<stdio.h>
void factroial(int n,int r);
void main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    factroial(n,r);
}
void factroial(int n,int r)
{
    int n_fact=1,r_fact=1,nr_fact=1;
    for (int i = 1; i < n; i++)
    {
        /* code */
        n_fact=n_fact*i;
    }
    for (int i = 1; i < r; i++)
    {
        /* code */
        r_fact=r_fact*i;
    }
    for (int i = 1; i < n-r; i++)
    {
        /* code */
        nr_fact=nr_fact*i;
    }
   float x = (n_fact)/((nr_fact)*(r_fact));
   printf("the value of factorial is equal to %lf",x);
}
