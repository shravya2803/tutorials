# include<stdio.h>
void main ()
{
    int x=100,y=37,z;
    for (int i=1;i<=x;i++)
    {
        printf("Enter your lucky number\n");
        scanf("%d",&z);
        if (z==y)
        {
            printf("you win\n");
            break;
        }
        else if(z<y)
        {
            if(z>=30)
            {
                printf("you are too close to answer\n");
            }
            else if (z>=20)
            {
                printf("you have to go beyond 30\n");
            }
            else 
            {
                printf("you are too low\n");
            }
        }
        else if(z>y)
        {
            if(z<=40)
            {
                printf("you are too close to answer\n");
            }
            else if(z<=60&&z>40)
            {
                printf("you have to go below 40\n");
            }
            else
            {
                printf("you are too high\n");
            }
        }
        }
    }
