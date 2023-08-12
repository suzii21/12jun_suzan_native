//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)

#include<stdio.h>
int main()
{
int a, b;
int ch;
printf("enter the value of a: ");
scanf("%d", &a);
printf("enter the value of b: ");
scanf("%d", &b);
printf("Enter your choice :");
scanf("%d",&ch);
switch (ch)
{
    case 1:
    printf("addition %d", a+b);
    break;
    case 2: 
    printf("subrtraction %d", a-b);
    break;
    case 3: 
    printf("multiplication%d", a*b);
    case 4:
    printf("division%d", a/b);
    break;
    case 5:
    printf("modulo: %d",a%b);
    break;
    default:
    printf("invalid output");
}
return 0;
}