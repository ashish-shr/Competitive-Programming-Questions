#include <stdio.h>
#include <math.h>
int main(void)
{
  int i, t;
  scanf("%d", &t);
  for (i = 0; i < t; i++)
  {
    int maxt, maxn, sumn, j, x, sum, y;
    y = 0;
    sum = 0;
    scanf("%d %d %d", &maxt, &maxn, &sumn);
    x = (sumn / maxn);
    if (x <= maxt)
    {
      for (j = 1; j <= x; j++)
      {
        sum = sum + pow(maxn, 2);
      }
      y = sumn - (x * maxn);
      sum = sum + pow(y, 2);
      printf("%d\n", sum);
    }
    else
    {
      for (j = 1; j <= maxt; j++)
      {
        sum = sum + pow(maxn, 2);
      }
      y = sumn - (x * maxn);
      sum = sum + pow(y, 2);
      printf("%d\n", sum);
    }
  }
  return 0;
}