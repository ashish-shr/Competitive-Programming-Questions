#include <stdio.h>
int main()
{
  int T;
  scanf("%d", &T);
  while (T--)
  {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    if (Z % X == 0 && Z % Y != 0)
    {
      printf("CHICKEN\n");
    }
    else if (Z % Y == 0 && Z % X != 0)
    {
      printf("DUCK\n");
    }
    else if (Z % X == 0 && Z % Y == 0)
    {
      printf("ANY\n");
    }
    else
      printf("NONE\n");
  }
  return 0;
}