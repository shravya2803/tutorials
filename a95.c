#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 50

typedef struct {
    int empNumber;
    char empName[100];
    float basicPay;
} Employee;

int main() {
    Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empNumber);
        printf("Employee Name: ");
        scanf("%s", employees[i].empName);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee Number: %d\n", employees[i].empNumber);
        printf("Employee Name: %s\n", employees[i].empName);
        printf("Basic Pay: %.2f\n", employees[i].basicPay);
    }

    return 0;
}
