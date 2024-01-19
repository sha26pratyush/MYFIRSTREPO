#include<stdio.h>

int main(void)
{
  int n;
  int i, j;

  printf("Enter the number of rows you want to print: ");
  scanf("%d", &n);

  for(i=0; i<n; i++)
  {
    printf("*");
  }
  printf("\n");
}
