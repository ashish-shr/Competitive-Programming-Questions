#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
  char strs[MAX][MAX], prefix[MAX];
  int num, i, j;
  printf("Enter the number of strings: ");
  scanf("%d", &num);
  printf("Enter %d strings:\n", num);
  for (i = 0; i < num; i++)
  {
    scanf("%s", strs[i]);
  }

  // copying first string to prefix string
  strcpy(prefix, strs[0]);

  // checking for common prefix among the available strings
  for (i = 1; i < num; i++)
  {
    j = 0;
    while (prefix[j] == strs[i][j])
    {
      j++;
    }
    prefix[j] = '\0';
  }
  printf("Longest common prefix: %s\n", prefix);
  return 0;
}
