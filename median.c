#include <stdio.h>
#define MAX 100

int main()
{
    int firstArr[MAX], secondArr[MAX], mergedArr[MAX * 2];
    int firstSize, secondSize, i, j, k, result, tmp;
    float median;
    printf("size of first array: ");
    scanf("%d", &firstSize);

    printf("Enter elements of first array:\n");
    for (i = 0; i < firstSize; i++)
    {
        scanf("%d", &firstArr[i]);
    }

    printf("size of second array: ");
    scanf("%d", &secondSize);

    printf("Enter elements of second array:\n");
    for (i = 0; i < secondSize; i++)
    {
        scanf("%d", &secondArr[i]);
    }

    // Merging both arrays
    i = j = k = 0;
    while (i < firstSize && j < secondSize)
    {
        mergedArr[k++] = firstArr[i++];
        mergedArr[k++] = secondArr[j++];
    }

    while (i < firstSize)
    {
        mergedArr[k++] = firstArr[i++];
    }

    while (j < secondSize)
    {
        mergedArr[k++] = secondArr[j++];
    }

    // sorting the merged array
    for (i = 0; i < k - 1; i++)
    {
        for (j = 0; j < k - i - 1; j++)
        {
            if (mergedArr[j] > mergedArr[j + 1])
            {
                tmp = mergedArr[j];
                mergedArr[j] = mergedArr[j + 1];
                mergedArr[j + 1] = tmp;
            }
        }
    }

    // finding the median
    if ((firstSize + secondSize) % 2 == 0)
    {
        result = (firstSize + secondSize) / 2;
        median = (float)(mergedArr[result] + mergedArr[result - 1]) / 2;
        printf("Median: %f", median);
    }
    else
    {
        result = (firstSize + secondSize) / 2;
        median = mergedArr[result];
        printf("Median: %f", median);
    }

    return 0;
}
