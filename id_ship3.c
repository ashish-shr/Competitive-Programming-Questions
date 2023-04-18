#include <stdio.h>

int main()
{
  int t;
  char a;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    scanf(" %c", &a);
    if (a == 'B' || a == 'b')
    {
      printf("BattleShip\n");
    }
    else if (a == 'c' || a == 'C')
    {
      printf("Cruiser\n");
    }
    else if (a == 'D' || a == 'd')
    {
      printf("Destroyer\n");
    }
    else
    {
      printf("Frigate\n");
    }
  }
  return 0;
}