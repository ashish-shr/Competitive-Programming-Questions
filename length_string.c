#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], x[30];
    int count = 0, max = 0, i, j, k = 0, l;
    printf("Enter the sentence:\n");
    gets(a);
    l = strlen(a);
    k = 0;
    for (i = 0; i < l; i++)
    {
        if (a[i] != ' ')
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
                k = i - max;
            }
            count = 0;
        }
    }
    if (count > max)
    {
        max = count;
        k = l - max;
    }
    j = 0;
    for (i = k; i < k + max; i++)
    {
        x[j] = a[i];
        j++;
    }
    x[j] = '\0';
    printf("%d", max);
    return 0;
}