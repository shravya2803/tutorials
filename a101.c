#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    char branch[50];
    float cgpa;
};

int main() {
    FILE *file ;
    if(file==NULL)
    {
        file = fopen("LNMIITSTUDENT.DAT", "w");
    }
    else
    {
    file = fopen("LNMIITSTUDENT.DAT", "a");
    }
    struct Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter branch: ");
    scanf("%s", student.branch);
    printf("Enter CGPA: ");
    scanf("%f", &student.cgpa);

    fwrite(&student, sizeof(struct Student), 1, file);

    printf("Information added successfully.\n");

    fclose(file);
    return 0;
}