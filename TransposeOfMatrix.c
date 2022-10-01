#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], row, col, i, j, k;
    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of columns:");
    scanf("%d", &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Array[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("Original matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
    printf("\nTranspose of  matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (k = 0; k < col; k++)
        {
            printf("%d ", b[i][k]);
        }
        printf("\n");
    }
}
