#include<stdio.h>
int main(void)
{
    FILE *fp ;
    fp= fopen("1.txt","r");
    int count=1;
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}