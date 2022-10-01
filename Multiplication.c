#include <stdio.h>
 
int main()
{
  int a, b, p, q, c, d, k, total = 0;

 
  printf("Enter number of rows and columns of matrix 1 \n");
  scanf("%d%d", &a, &b);
  printf("Enter elements of matrix 1 \n");
  int m1[a][b];
 
  for (c = 0; c < a; c++)
    for (d = 0; d < b; d++)
      scanf("%d", &m1[c][d]);
 
  printf("Enter number of rows and columns of matrix 2 \n");
  scanf("%d%d", &p, &q);
    int m2[p][q];
     int res[a][q];
 
  if (b != p)
    printf("The multiplication is not possible.\n");
  else
  {
    printf("Enter elements of matrix 2\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &m2[c][d]);
 
    for (c = 0; c < a; c++) 
    {
      for (d = 0; d < q; d++) 
      {
        for (k = 0; k < p; k++) 
        {
          total= total + m1[c][k]*m2[k][d];
        }
 
        res[c][d] = total;
        total= 0;
      }
    }
 
    printf("Product of the matrices is :\n");
 
    for (c = 0; c < a; c++) 
    {
      for (d = 0; d < q; d++)
      {
        printf("%d\t", res[c][d]);
      }
 
      printf("\n");
    }
  }
 
  return 0;
}
