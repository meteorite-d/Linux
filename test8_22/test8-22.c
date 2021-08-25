#include<stdio.h>


void print_table(int n)
{
  int i = 0;
  for(i=1;i<=n;i++)
  {
    int j = 0;
    for(j=1;j<=i;j++)
    {
      printf("%-2d*%2d= %2d ", i, j, i * j);
    }
    printf("\n");
  }
}










int main()
{
  int n = 9;
  print_table(n);
  return 0;
}
