#include <iostream>
using namespace std;
int main()
{
    int T, sum, temp;
    cin >> T;
    while (T--)
    {
        int n, r, ld, x = 0, fd;
        cin >> n;
        ld = n % 10;
        while (n > 0)
        {
            r = n % 10;
            x = x * 10 + r;
            n = n / 10;
        }
        fd = x % 10;
        cout << fd + ld<<endl;
    }

    return 0;
}