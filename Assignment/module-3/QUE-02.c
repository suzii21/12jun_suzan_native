//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
int main()
{
int a, b;
int ans;
printf("enter the value:\nA: ");
scanf("%d", &a);
printf("B: ");
scanf("%d", &b);
ans = a + b;
printf("\naddition of a and b is: %d", ans);
printf("\nsubtraction: %d", a-b);
printf("\nmultiplication of a and b is: %d", a*b);
printf("\ndivision of a and b is: %f", (float)a/(float)b);
printf("\nmodulo: %d", a%b);
return 0;
}