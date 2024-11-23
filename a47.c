# include<stdio.h>
int main()
{
   int x=5;
   for(int i=65;i<=(65+x);i++)
   {
    for(int j=65;j<=i;j++)
    {
        char c=(char)j;
        printf("%c",c);
    }
    printf("\n");
   }
}