#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int i, c1 = 0, c2 = 0;
        string a, b;
        cin >> a >> b;
        for (i = 0; i < a.length(); i++)
        {
            if (a[i] == b[i] && a[i] != '?' && b[i] != '?')
            {
                c1++;
            }
            if (a[i] != b[i] && a[i] != '?' && b[i] != '?')
            {
                c2++;
            }
        }
        cout << c2 <<' '<< a.length() - c1;
        }

    return 0;
}