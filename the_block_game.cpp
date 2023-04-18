#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, r, sum = 0;
        cin >> n;
        int temp = n;
        while (n > 0)
        {
            r = n % 10;
            sum = sum * 10 + r;
            n = n / 10;
        }
        n = temp;
        if (sum == n)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }
    return 0;
}