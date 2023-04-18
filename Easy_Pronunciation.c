#include <stdio.h>
#include <string.h>
int main(void)
{
  // your code goes here
  int t, i, n, j, count = 0;
  char x[25];
  scanf("%d", &t);
  for (j = 0; j < t; j++)
  {
    count = 0;
    int flag = 0;
    scanf("%d", &n);
    scanf("%s", x);
    for (i = 0; i < strlen(x); i++)
    {
      if (x[i] != 'a' || x[i] != 'e' || x[i] != 'o' || x[i] != 'i' || x[i] != 'u')
      {
        count++;
      }
      else
      {
        count = 0;
      }
      if (count >= 4)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 1)
    {
      printf("NO\n");
    }
    else
    {
      printf("YES\n");
    }
  }
  return 0;
}