#include<stdio.h>

int main()
{
    FILE *fp ;
    int count;
    fp = fopen("LNMITSTUDENT.java","r");
     int n ;
    printf("Enter the no of studentsyou want to enter the file\n");
    scanf("%d",&n);
    if(fp==NULL)
    {
        fp = fopen("LNMITSTUDENT.java","w+");
         count = 1;
    }
    else
    {
        fp = fopen("LNMITSTUDENT.java","a");
        count = fscanf(fp,"%d",fp[0]);
    }
   
    char name[30];
    for( int i=0;i<n;i++)
    {
        printf("Enter the name of student %d\n",count);
        scanf("%s",name);
        
        fprintf(fp,"Name of student is %s\n",name);
        fprintf(fp,"Roll no of student is %d\n",count);
        count++;
    }
    fclose(fp);
    return 0;
}
