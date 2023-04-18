#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int i, count1 = 0, count2 = 0;
        string a;
        cin >> a;
        for (i = 0; i < a.length(); i++)
        {
            if (a[i] == '0')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if (count1 == 1 || count2 == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}