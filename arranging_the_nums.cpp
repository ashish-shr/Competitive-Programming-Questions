#include <iostream>
using namespace std;
int main()
{
    int i, j, n, d;
    cin >> n >> d;
    int a[n], x;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < d; i++)
    {
        x = a[0];
        for (j = 0; j < n; j++)
        {
            a[j] = a[j + 1];
        }

        a[n - 1] = x;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}