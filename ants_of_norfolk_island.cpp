#include <iostream>
using namespace std;

int main()
{

    int T, k;
    cin >> T >> k;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum > k)
            cout << "FAILURE" << endl;
        else
            cout << "SUCCESS" << endl;
    }
    return 0;
}