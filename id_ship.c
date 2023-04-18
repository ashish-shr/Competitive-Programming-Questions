#include <stdio.h>

int main()
{
  int i, t;
  char x;
  scanf("%d", &t);
  for (i = 0; i < t; i++)
  {
    scanf(" %c", &x);
    if (x == 'B' || x == 'b')
    {
      printf("Battleship\n");
    }
    else if (x == 'C' || x == 'c')
    {
      printf("Cruiser\n");
    }
    else if (x == 'D' || x == 'd')
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