#include<stdio.h>
void findLengthOfString(char arr[]);
int main()
{
    char arr[100];
    scanf("%[^\n]s",arr);
    findLengthOfString(arr);
}
void findLengthOfString(char arr[])
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d",count);
}