#include <stdio.h>
int ways(int);

int main()
{
  int stairs;
  printf("Stairs: ");
  scanf("%d", &stairs);
  printf("Total Ways: %d", ways(stairs));
  return 0;
}

int ways(int stairs)
{
  int i, curr, prev, after;
  if (stairs <= 3)
  {
    return stairs;
  }
  curr = 0, prev = 2, after = 3;
  for (i = 4; i <= stairs; i++)
  {
    curr = prev + after;
    prev = after;
    after = curr;
  }
  return curr;
}