#include <stdio.h>

int main()
{
  int T, i;
  scanf("%d\n", &T);
  for (i = 1; i <= T; i++)
  {
    int N, count = 0;
    scanf("%d\n", &N);
    int D[N], j;
    for (j = 0; j < N; j++)
    {
      scanf("%d\n", &D[j]);
      if (D[j] >= 1000)
      {
        count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}