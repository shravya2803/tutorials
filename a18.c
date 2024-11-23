# include <stdio.h>
void main (){
     int a,b,c;
    printf("Please enter the 1st number\n");
    scanf("%d",&a);
    printf("Please enter the 2nd number\n");
    scanf("%d",&b);
    printf("Please enter the 3rd number\n");
    scanf("%d",&c);
      a>b && a>c ? printf("1st no is highest\n"):b>c && b>a? printf("2nd no is the highest no\n"):printf("3rd no is the highest no\n");

}