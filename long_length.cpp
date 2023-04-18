#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100], x[30];
    int count = 0, max = 0, i, j, k = 0, l;
    cout << "Enter the sentence:" << endl;
    cin >> a;
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
    cout << max << endl;
    return 0;
}