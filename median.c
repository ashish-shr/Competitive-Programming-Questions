#include <stdio.h>
#define n 100

int main()
{
    int a[n], b[n], c[n * 2];
    int n1, n2, i, r, mo, j, k, tmp;

    printf("size of first array: ", n);
    scanf("%d", &n1);

    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("size of second array: ", n);
    scanf("%d", &n2);

    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Merge elements alternatively
    i = j = k = 0;
    while (i < n1 && j < n2)
    {
        c[k++] = a[i++];
        c[k++] = b[j++];
    }

    // Copy remaining elements of a, if any
    while (i < n1)
    {
        c[k++] = a[i++];
    }

    // Copy remaining elements of b, if any
    while (j < n2)
    {
        c[k++] = b[j++];
    }

    for (i = 0; i < k - 1; i++)
    {
        for (j = 0; j < k - i - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                tmp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < k; i++)
    {
        printf("%d\n", c[i]);
    }
    if ((n1 + n2) % 2 == 0)
    {
        r = (n1 + n2) / 2;
        mo = (c[r] + c[r - 1]) / 2;
        printf("\nMedian=%d", mo);
    }
    else
    {
        r = (n1 + n2) / 2;
        printf("\nMedian=%d", c[r]);
    }

    return 0;
}
