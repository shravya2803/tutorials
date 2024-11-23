# include <stdio.h>
void main()
{
    int number=0,number2=1,n,input;
    printf("please enter the number of numbers you want to enter\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       printf("Please enter your numbers\n");
       scanf("%d",&input);
       if (input>number)
       {
          number=input;
       }
       if (number2>input)
       {
          number2=input;
       }
    }
    printf("your highest number is %d\n",number);
    printf("your lowest number is %d\n",number2);
}