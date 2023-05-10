#include <stdio.h>
#define MAX 25
int isBeautiful(char *);
int main()
{
  char user[MAX];
  printf("Garland: ");
  scanf("%s", user);
  if (isBeautiful(user) == 1)
  {
    printf("Beautiful");
  }
  else
  {
    printf("Not Beautiful");
  }
  return 0;
}

int isBeautiful(char *s)
{
  int i, red = 0, green = 0;
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == 'G')
    {
      green++;
    }
    else if (s[i] == 'R')
    {
      red++;
    }
    else
    {
      return 0;
    }
  }
  if (red == green)
  {
    return 1;
  }
  else if (red > green && (red - 1) == green)
  {
    return 1;
  }
  else if (green > red && (green - 1) == red)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}