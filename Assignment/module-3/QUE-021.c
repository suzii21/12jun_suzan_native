//WAP to find factorial using recursion

#include<stdio.h>
int facto(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n*facto(n-1);
}
int main()
{
    int no;   
    printf("Enter the value of the no: ");
    scanf("%d", &no); 
    printf("\n%d", facto(no));
}