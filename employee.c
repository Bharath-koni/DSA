#include <stdio.h>

int main()
{
    int emp_id;
    char emp_name[50];
    float salary, tax;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", emp_name);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    tax = salary * 10 / 100;

    printf("\nEmployee Details\n");
    printf("------------------------\n");
    printf("Employee ID     : %d\n", emp_id);
    printf("Employee Name   : %s\n", emp_name);
    printf("Salary          : %.2f\n", salary);
    printf("Income Tax (10%%): %.2f\n", tax);

    return 0;
}
