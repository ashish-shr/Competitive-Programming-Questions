#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    while (s--)
    {
        int i, n, flag = 0, flag2 = 0;
        cin >> n;
        int x[n];
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 != 0 && a[0] == 1 && a[n - 1] == 1)
        {
            for (i = 0; i < n / 2; i++)
            {
                if (x[a[i + 1] - a[i]] == 1)
                {
                    cout<<"no"<<endl;
                    flag = 1;
                }
            }
            for (i = n / 2; i < n; i++)
            {
                if (x[a[i] - a[i + 1]] == 1)
                {
                    cout<<"no"<<endl;
                    flag = 1;
                }
            }
            
        }
        else if (n % 2 == 0)
        {
            cout << "no" << endl;
        }
        else if (a[0] != 1 && a[n - 1] != 1)
        {
            cout << "no" << endl;
        }
        if(flag == 0)
        {
            cout<<"no"<<endl;
        }
    }

    return 0;
}