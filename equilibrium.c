#include <stdio.h>
#define MAX 25
int isEquilibrium(int[], int);
int main()
{
  int arr[MAX], size;
  printf("Size: ");
  scanf("%d", &size);
  printf("Elements:\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  int result = isEquilibrium(arr, size);
  printf("Equilibrium position: %d", result);
  return 0;
}

int isEquilibrium(int arr[], int size)
{
  int leftSum, rightSum, i, j;
  for (i = 1; i < size - 1; i++)
  {
    leftSum = 0;
    for (j = 0; j < i; j++)
    {
      leftSum = leftSum + arr[j];
    }
    rightSum = 0;
    for (j = size - 1; j > i; j--)
    {
      rightSum = rightSum + arr[j];
    }
    if (leftSum == rightSum)
    {
      return i + 1;
    }
  }
  return 0;
}