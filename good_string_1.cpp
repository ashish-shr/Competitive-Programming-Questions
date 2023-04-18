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
        int i, count = 0;
        string a;
        cin >> a;
        sort(a.begin(), a.end());
        for (i = 0; i < a.length(); i++)
        {
            if (a[i] == a[i + 1])
            {
                count++;
            }
        }

        cout << count;
    }
    return 0;
}