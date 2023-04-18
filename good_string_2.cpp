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
        int i, res = 0;
        string a;
        int x[26] = {0};
        cin >> a;
        for (i = 0; i < a.length(); i++)
        {

            x[a[i] - 97]++;
        }
        for (i = 0; i < 26; i++)
        {
            if (x[i] > 1)
                res = res + (x[i] - 1);
        }

        cout << res<<endl;
    }
    return 0;
}