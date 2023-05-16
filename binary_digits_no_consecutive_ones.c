#include <stdio.h>
int binaryDigits(int);

int main()
{
  int length;
  printf("Length: ");
  scanf("%d", &length);
  printf("Total Binary Digits: %d", binaryDigits(length));
  return 0;
}

int binaryDigits(int length)
{
  int i, curr, prev, after;
  curr = 0, prev = 1, after = 1;
  for (i = 1; i <= length; i++)
  {
    curr = prev + after;
    prev = after;
    after = curr;
  }
  return curr;
}