#include <stdio.h>
#include <string.h>

int romanToInteger(char *s)
{
  int length = strlen(s), value = 0, prevValue = 0, integer = 0, count = 0;
  for (int i = length - 1; i >= 0; i--)
  {
    switch (s[i])
    {
    case 'I':
      value = 1;
      break;
    case 'V':
      value = 5;
      break;
    case 'X':
      value = 10;
      break;
    case 'L':
      value = 50;
      break;
    case 'C':
      value = 100;
      break;
    case 'D':
      value = 500;
      break;
    case 'M':
      value = 1000;
      break;
    default:
      return -1;
    }

    if (value >= prevValue)
    {
      integer += value;
      if (value == prevValue)
      {
        count++;
        if (count > 2)
        {
          return -1;
        }
      }
      else
      {
        count = 0;
      }
    }
    else
    {
      integer -= value;
      count = 0;
    }
    prevValue = value;
  }
  return integer;
}

int main()
{
  char romanNumber[50];
  printf("Enter the roman number: ");
  scanf("%s", romanNumber);
  strupr(romanNumber);
  int result = romanToInteger(romanNumber);
  if (result == -1)
  {
    printf("Invalid Roman Number\n");
  }
  else
  {
    printf("%s : %d\n", romanNumber, result);
  }
  return 0;
}
