#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int k;
    cin >> k;
    cout << a[n - 1]<<endl;
    cout << a[n - k];

    return 0;
}