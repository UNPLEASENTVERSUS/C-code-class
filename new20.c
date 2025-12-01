#include <stdio.h>
int main()
{
  int row, i, j;
  row = 3;
  printf("\nTriangle pattern:\n");
  for(i=1; i<=row; i++)
  {
    for(j=1; j<=i; j++)
    {
        printf("%d", i);
    }
    printf("\n");
  }  
  return 0;
}