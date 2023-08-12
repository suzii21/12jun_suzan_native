#include<stdio.h>
int main()
{
    int array{ {1,2,3} {4,5,6} {7,8,9} };
    int i,j;
    for(i = 0; i <= 3; i++)
    {
        for(j = 0; j <=3; j++)
        {
            printf("enter the value of array: %d", array[i][j]);
        }
            for (j = 3; j > i; j--) 
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
        }
return 0;
}