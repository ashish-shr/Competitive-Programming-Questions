#include <stdio.h>

void main()
{
  int n, a[50], i, j, k, found = 0;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Enter the array: ");
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      for (k = j + 1; k < n; k++)
      {
        if (a[i] + a[j] + a[k] == 0)
        {
          printf("The elements that give 0 sum are %d %d %d\n", a[i], a[j], a[k]);
          found = 1;
        }
      }
    }
  }
  if (!found)
  {
    printf("No possible sum.\n");
  }
}
