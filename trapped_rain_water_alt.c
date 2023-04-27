#include <stdio.h>
#define MAX 100
int trappedRainWater(int[], int);

int main()
{
  int height[MAX], n, totalTrappedWater = 0, i;
  printf("No. of heights: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Height: ");
    scanf("%d", &height[i]);
  }
  totalTrappedWater = trappedRainWater(height, n);
  printf("Total trapped water: %d", totalTrappedWater);
  return 0;
}

int trappedRainWater(int h[], int n)
{
  int i, j, leftMax[MAX], rightMax[MAX], water = 0;
  leftMax[0] = h[0];
  for (i = 1; i < n; i++)
  {
    if (h[i] > leftMax[i - 1])
    {
      leftMax[i] = h[i];
    }
    else
    {
      leftMax[i] = leftMax[i - 1];
    }
  }
  rightMax[n - 1] = h[n - 1];
  for (i = n - 2; i >= 0; i--)
  {
    if (h[i] > rightMax[i + 1])
    {
      rightMax[i] = h[i];
    }
    else
    {
      rightMax[i] = rightMax[i + 1];
    }
  }
  for (i = 1; i < n - 1; i++)
  {
    if (rightMax[i] > leftMax[i])
    {
      water = water + leftMax[i] - h[i];
    }
    else
    {
      water = water + rightMax[i] - h[i];
    }
  }
  return water;
}
