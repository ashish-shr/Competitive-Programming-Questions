#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mins(string, string);
int main()
{
    string a = "heap";
    string b = "pea";
    
    return 0;
}
int mins(string a, string b)
{
    int i =a.length(),j=b.length();
    int count = 0;
    if(a[i-1]==b[j-1])
    {
        i--;
        j--;
    }
    else if(a[i-1]!=b[j-1])
    {
        count ++;
    }
    else
    {
        
    }
}