#include<stdio.h>
int main()
{
    char input[100];
    char temp[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    int i = 0;
    while(input[i] != '\0')
    {
        temp[i] = input[i];
        i++;
    }
    printf("You entered: %s", input);
    i = 1;
    while (input[i] != '\0')
    {
        int ch = input[i];
        if(ch <= input[i-1])
        {
            input[i] = input[i-1];
            input[i-1] = ch;
        }
        i++;
    }
    if(input == temp)
    {
        printf("no answer");
    }
    else{
    printf("Sorted string:\n%s", input);
    }
    return 0;
    
}