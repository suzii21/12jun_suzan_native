//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}