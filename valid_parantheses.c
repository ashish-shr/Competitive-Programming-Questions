#include <stdio.h>
#define MAX 25
int isValid(char *);

// driver function
int main()
{
  char user[MAX], i;
  printf("Enter the string: ");
  scanf("%s", user);
  if (isValid(user) == 1)
  {
    printf("true");
  }
  else
  {
    printf("false");
  }
  return 0;
}

int isValid(char *s)
{
  int i, flag = 0;

  // checking for valid parantheses
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == (s[i + 1] - 1) || s[i] == (s[i + 2] - 2))
    {
      flag = 1;
    }
  }
  if (flag == 1)
  {
    return 1;
  }
}