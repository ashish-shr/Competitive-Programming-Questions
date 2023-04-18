#include <iostream>
using namespace std;
int main()
{

    int i, n, even = 0, odd = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (even++ > odd++)
        {
            cout << "READY FOR BATTLE";
            break;
        }
        else
        {
            cout << "NOT READY";
            break;
        }
    }

    return 0;
}