//WAP to check if the given year is a leap year or not.

#include <stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if(year%4==0)
    {
        printf("year is leap year: ");
    }
    else
    {
        printf("not a leap year: ");
    }
    return 0;
}