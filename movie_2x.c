#include <stdio.h>
int main()
{
  int x, y, m, n, o = 2;
  scanf("%d %d", &x, &y);
  m = y / o;
  n = x - y;
  x = m + n;
  printf("%d\n", x);
  return 0;
}