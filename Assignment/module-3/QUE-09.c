//WAP to find number is even or odd using ternary operator.

#include<stdio.h>
  int main() {
  int n;
  printf("Enter any number:\n");
  scanf("%d",&n);
  (n%2 == 0) ? printf("%d is odd number",n) : printf("%d is even number",n);
  return 0;
}
