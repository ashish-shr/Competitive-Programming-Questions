// Click on the SUBMIT button to make a submission to this problem.

#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
      fact = fact * i;
    }
    printf("%d\n", fact);
  }
  return 0;
}