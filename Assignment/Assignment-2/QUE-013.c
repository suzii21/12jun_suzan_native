//WAP to print Fibonacci series up to given numbers

#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);
 for(i=2;i<number;++i) 
 {    
  n=n1+n2;    
  printf(" %d",n);    
  n1=n2;    
  n2=n;    
 }  
  return 0;  
 }   