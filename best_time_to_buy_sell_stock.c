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
  int i, j, profit = 0, max = 0;
  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      profit = arr[j] - arr[i];
      if (profit > max)
      {
        max = profit;
      }
    }
  }
  return max;
}
