//WAP to swap two numbers without using third variable.

#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a and b: ");
scanf("%d%d", &a, &b);
printf("\nbefore swapping: %d%d", a,b);
a = a + b;
b = a - b;
a = a - b;
printf("\nafter swapping: %d%d", a,b);
return 0;
}
