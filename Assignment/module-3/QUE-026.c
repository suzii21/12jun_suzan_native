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
    struct Employee emp;

    printf("Enter Employee No: ");
    scanf("%d", &emp.emp_no);

    printf("Enter Employee Name: ");
    scanf("%s", emp.emp_name);

    printf("Enter Address: ");
    scanf(" %[^\n]s", emp.address);

    printf("Enter Age: ");
    scanf("%d", &emp.age);

    printf("\nEmployee Information:\n");
    printf("Employee No: %d\n", emp.emp_no);
    printf("Employee Name: %s\n", emp.emp_name);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);

    return 0;
}


