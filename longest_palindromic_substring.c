// Longest palindromic substring

#include <stdio.h>
#include <string.h>
#define MAX 50

int main()
{
  char user[MAX], subString[MAX], tmpString[MAX], palindromic[MAX];
  int i, j, k, max = 0, len, count;
  printf("Enter the string: ");
  scanf("%s", user);

  // finding all possible substring
  for (i = 0; i < strlen(user); i++)
  {
    for (j = i; j < strlen(user); j++)
    {
      len = 0;
      count = 0;
      for (k = i; k <= j; k++)
      {
        subString[len++] = user[k];
        count++;
      }
      subString[len] = '\0';
      strcpy(tmpString, subString);

      // checking for longest palindromic substring
      if (count > max && strcmp(strrev(tmpString), subString) == 0 && count != 1)
      {
        max = count;
        strcpy(palindromic, subString);
      }
    }
  }

  printf("Longest Palindromic Substring: %s", palindromic);

  return 0;
}
