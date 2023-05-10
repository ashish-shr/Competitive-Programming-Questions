#include <stdio.h>
#define MAX 25
void printSpiral(int[MAX][MAX], int, int);
int main()
{
  int arr[MAX][MAX], i, j, row, col;
  printf("Row: ");
  scanf("%d", &row);
  printf("Col: ");
  scanf("%d", &col);
  printf("Matrix elements:\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printSpiral(arr, row, col);
  return 0;
}

void printSpiral(int arr[MAX][MAX], int row, int col)
{
  int i, top = 0, bottom = row - 1, left = 0, right = col - 1;
  while (top <= bottom && left <= right)
  {
    for (i = left; i <= right; i++)
    {
      printf("%d ", arr[top][i]);
    }
    top++;
    for (i = top; i <= bottom; i++)
    {
      printf("%d ", arr[i][right]);
    }
    right--;
    if (top <= bottom)
    {
      for (i = right; i >= left; i--)
      {
        printf("%d ", arr[bottom][i]);
      }
      bottom--;
    }
    if (left <= right)
    {
      for (i = bottom; i >= top; i--)
      {
        printf("%d ", arr[i][left]);
      }
      left++;
    }
  }
}