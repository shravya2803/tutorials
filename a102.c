#include<stdio.h>
int main(void)
{
    FILE *fp;
    fp = fopen("2.txt", "r");
    char ch;
    int charCount = 1, wordCount = 1, lineCount = 1;
    while ((ch = fgetc(fp)) != EOF)
    {
        /* code */
        charCount++;
        if(ch == ' ')
        {
            wordCount++;
        }
        if(ch == '\n')
        {
            lineCount++;
        }
    }
   printf("Number of characters: %d\n", charCount);
   printf("Number of words: %d\n", wordCount);
   printf("Number of lines: %d\n", lineCount);
    return 0;     
}