#include <stdio.h>
#define MAX 25

int max_profit(int[], int);

int main()
{
  int prices[MAX], size;
  printf("Size: ");
  scanf("%d", &size);
  printf("Enter the prices:\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &prices[i]);
  }
  int max = max_profit(prices, size);
  printf("Maximum profit: %d", max);
  return 0;
}
int max_profit(int arr[], int n)
{
  int highest = 0, diff = 0, max[MAX], i;
  diff = arr[n - 1];
  for (i = n - 1; i >= 0; i--)

  {
    if (arr[i] > diff)
    {
      max[i] = arr[i];
      diff = arr[i];
    }
    else
    {
      max[i] = diff;
    }
  }
  diff = 0;
  for (i = 0; i < n; i++)
  {
    diff = max[i] - arr[i];
    if (diff > highest)
    {
      highest = diff;
    }
  }
  return highest;
}