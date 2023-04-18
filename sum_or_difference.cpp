#include <iostream>
using namespace std;
int main()
{
    int N1;
    int N2;
    int c;
    cin>>N1>>N2;
    if (N1>N2)
    {
        c = N1 - N2;
        cout<<c;
    }
    else
    {
        c = N1 + N2;
        cout<<c;
    }
    return 0;
} 
