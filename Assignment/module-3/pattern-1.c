#include <stdio.h>
int main() 
{
 int i, j, n;
 printf("Enter number of pattern: ");
 scanf("%d", &n);
for (int i = 1; i < n; i++) 
{
for (int j = 1; j <= i; j++) 
{
printf("%d", j%2);
}
printf("\n");
}
return 0;
}