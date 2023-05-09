#include <stdio.h>
#define MAX 50

int canJump(int[], int);

int main()
{
  int arr[MAX], size, i, result = 0;
  printf("Size: ");
  scanf("%d", &size);
  printf("Jumps:\n");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  result = canJump(arr, size);
  if (result == 1)
  {
    printf("true");
  }
  else
  {
    printf("false");
  }
  return 0;
}

// finding successful jumps
int canJump(int arr[], int size)
{
  int end = 0, i;
  for (i = 0; i <= end; i++)
  {
    if (arr[i] + i > end)
    {
      end = arr[i] + i;
    }
    if (end >= size - 1)
    {
      return 1;
    }
  }
  return 0;
}
