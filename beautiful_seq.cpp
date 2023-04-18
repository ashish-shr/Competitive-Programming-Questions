#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void seq(int[], int);
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int i, n, flag = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        seq(a, n);
    }

    return 0;
}

void seq(int a[], int n)
{
    int i, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            cout << "ne krasivo" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prekrasnyy" << endl;
    }
}
