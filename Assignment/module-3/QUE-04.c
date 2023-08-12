//WAP to find simple interest.

#include<stdio.h>
#include<math.h>
int main()
{
    int principal, time;
    float rate, interest;
    printf("enter the principal: ");
    scanf("%d", &principal);
    printf("\nenter the time: ");
    scanf("%d", &time);
    printf("\nenter the rate: ");
    scanf("%d", &rate);
    interest = principal*time*rate/100;
    printf("simple interest is: %f", interest);
    return 0;
}
