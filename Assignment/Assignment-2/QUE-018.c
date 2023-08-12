//Write a program to find out the max number from given array using 
//function

#include<stdio.h>
int main()
{
    int i, array[] = {24, 56, 98,78,45};
    int length = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    for(i = 0; i < length; i++)
    {
        if(array[i] > max)
        max = array[i];
    }
printf("\nMaximum number is: %d", max);
return 0;
}