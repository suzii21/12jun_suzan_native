#include<stdio.h>
int main()
{
    int a, b, c;
    for(a=1; a<=8; a++)
    {
        for(b=9; b>a; b--)
        {
            printf(" ");
        }
        for(c=1; c<=a; c++)
        {
            printf("* ", c);
        }
        printf("\n");
    }
}