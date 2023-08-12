//WAP to convert years into days and days into years.

#include<stdio.h>
int main()
{
int days, year;
printf(“enter the number of days”);
scanf(“%d”, &ndays);
year = days / 365;
weeks = (days % 365) / 7;
days  = days - ((year * 365) + (weeks * 7));
printf("YEARS: %d\n", year);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);

return 0; 
}
