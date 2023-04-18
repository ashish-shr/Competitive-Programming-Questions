#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void encry(string);
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string a;
        cin >> a;
        encry(a);
    }

    return 0;
}
void encry(string a)
{
    int i, j;

    int x[] = {98, 57, 31, 45, 46};

    for (int i = 0; i < a.length(); i++)
    {
        a[i] = (a[i] - 65 + x[i]) % 26 + 65;
    }
    cout << a << endl;
}