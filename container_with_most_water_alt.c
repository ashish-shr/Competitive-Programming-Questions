#include <stdio.h>
#define MAX 100
int main()
{
  int height[MAX], n, i, j, start, end, max = 0, area = 0;
  printf("No. of heights:\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Height: ");
    scanf("%d", &height[i]);
  }
  start = 0;
  end = n - 1;
  while (start != end)
  {
    if (height[start] > height[end])
    {
      area = height[end] * (end - start);
      end--;
    }
    else
    {
      area = height[start] * (end - start);
      start++;
    }
    if (area > max)
    {
      max = area;
    }
  }

  printf("Container with most water: %d", max);
  return 0;
}