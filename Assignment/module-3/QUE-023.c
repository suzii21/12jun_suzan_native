//WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array

#include <stdio.h>
int main() 
{
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);
  printf("\nEnter elements of 1st number:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements of 2nd number:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      printf("%d  ", sum[i][j]);
      if (j == c - 1) 
      {
        printf("\n\n");
      }
    }
  return 0;
}