//Write a program of structure employee that provides the following
//information -print and display empno, empname, address and
//age
#include <stdio.h>

struct Employee {
    int emp_no;
    char emp_name[50];
    char address[100];
    int age;
};

int main() {
    struct Employee employees[5]; 

    printf("Enter information for five employees:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Enter Employee No: ");
        scanf("%d", &employees[i].emp_no);

        printf("Enter Employee Name: ");
        scanf("%s", employees[i].emp_name);

        printf("Enter Address: ");
        scanf(" %[^\n]s", employees[i].address); 

        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee No: %d\n", employees[i].emp_no);
        printf("Employee Name: %s\n", employees[i].emp_name);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }

    return 0;
}