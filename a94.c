#include<stdio.h>
void reverse(const char *string);
int main()
{

    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    reverse(string);
    return 0;
}
void reverse(const char *string)
{
    char revstring[100];
    int n = 0;
    for(int i = 0; string[i] != '\0'; i++)
    {
       n++;
    }
    for(int i = 0; i < n; i++)
    {
        revstring[n - 1 - i] = string[i];
    }
    revstring[n] = '\0';
    printf("%s", revstring);
}