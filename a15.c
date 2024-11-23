#include<stdio.h>
void main(){
    printf("Please provide marks of the student\n");
    double maths,sci,english,hindi,guj,total,percentage;
     printf("Please enter the marks of maths\n");
    scanf("%lf",&maths);
    printf("Please enter the marks of science\n");
    scanf("%lf",&sci);
     printf("Please enter the marks of english\n");
    scanf("%lf",&english);
     printf("Please enter the marks of hindi\n");
    scanf("%lf",&hindi);
     printf("Please enter the marks of gujarti\n");
    scanf("%lf",&guj);
    total=maths+sci+english+hindi+guj;
    printf("total marks are %lf\n",total);
    percentage=((total*100)/500);
    printf("Percentage are %lf\n",percentage);
    if (percentage>=60)
    {
        printf("your division is 'A'\n");
    }
    else if (percentage>=50&&percentage<60)
    {
        printf("your division is 'B'\n");
    }
    else if (percentage>=30&&percentage<50)
    {
        printf("your division is 'C'\n");
    }
    else
    {
        printf("you are fail\n");
    }
}