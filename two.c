#include <stdio.h>

int main()
{
  int i, j, rows, cols;
  printf("Enter rows and columns: ");
  scanf("%d %d", &rows, &cols);

  int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

  printf("Enter elements of first matrix:\n");
  for (i = 0; i < rows; i++)
    for (j = 0; j < cols; j++)
      scanf("%d", &mat1[i][j]);

  printf("Enter elements of second matrix:\n");
  for (i = 0; i < rows; i++)
    for (j = 0; j < cols; j++)
      scanf("%d", &mat2[i][j]);

  printf("Sum of matrices:\n");
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      sum[i][j] = mat1[i][j] + mat2[i][j];
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
