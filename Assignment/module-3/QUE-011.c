//11)Looping programs: 
//1. WAP to print 972 to 897 using for loop 
//2. WAP to take 10 no. Input from user and find out … 
//3. How many Even numbers are there 
//4. How many odd numbers are there 
//5. Sum of even numbers 
//6. Sum of odd numbers WAP to print table up to given numbers.

//1)WAP to print 972 to 897 using for loop.

#include<stdio.h>
int main()
{
    int i;
    for(i = 972; i >=897; i--)
{
    printf("\n%d", i);
}
return 0;
}

//2)WAP to take 10 no. Input from user and find out 

#include<stdio.h>
int main()
{
    int i;
    for(i = 0; i <= 10; i++)
{
    printf("\n%d", i);
}
return 0;
}


//3)How many Even numbers are there .

#include<stdio.h>
int main()
{
    int i;
    for(i = 0; i <= 10; i++)
{
    if(i%2==0)
    printf("\n%d", i);
}
return 0;
}

//4)How many odd numbers are there.

#include<stdio.h>
int main()
{
    int i;
    for(i = 0; i <= 10; i++)
{
    if(i%2!=0)
    printf("\n%d", i);
}
return 0;
}

//5)Sum of even numbers

#include<stdio.h>
int main()
{
    int i,n=2,m=0;
    for(i = 1; i <= 10; i=i+1)
{
    if(i%2==0)
    printf("\n%d", i);
    m=m+n;
    n=n+2;
}
    printf("\nsum of even numbers: %d",m);
return 0;
} 

//6)Sum of odd numbers

#include<stdio.h>
int main()
{
    int i, sum=0;
    for(i = 0; i <= 10; i++)
    {
        if(i%2!=0)
        printf("\n%d", i);
        sum=sum+i;
    }
    printf("\nsum of odd numbers: %d", sum);
    return 0;
}

//7)WAP to print table up to given numbers.

#include<stdio.h>
int main()
{
    int a, b;
    printf("enter an integer: ");
    scanf("%d", &a);
    for(b = 1; b <= 10; b++)
    {
        printf("\n%d*%d=%d", a,b,a*b);
    }
    return 0;
    
}