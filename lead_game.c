#include <stdio.h>
int main()
{
  int n, i;
  scanf("%d", &n);
  int p[n], q[n], r[n], x;
  for (i = 0; i < n; i++)
  {
    scanf("%d %d", &p[i], &q[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (p[i] >= q[i])
    {
      r[i] = p[i] - q[i];
    }
    else
    {
      r[i] = q[i] - p[i];
    }
  }
  for (i = 1; i < n; i++)
  {
    if (r[i] > r[i - 1])
    {
      x = i;
    }
  }
  if (p[x] > q[x])
  {
    printf("1 %d", r[x]);
  }
  else
  {
    printf("2 %d", r[x]);
  }
  return 0;
}