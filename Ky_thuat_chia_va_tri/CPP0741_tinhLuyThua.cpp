#include<bits/stdc++.h>

using namespace std;

long long p;

long long POW(long long a, long long b)
{
    if(!b) return 1;
    if(b & 1)
    {
        long long t = POW(a, b - 1);
        return (t * a) % p;
    }
    else
    {
        long long t = POW(a, b / 2);
        return (t * t) % p;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b >> p;
        cout << POW(a, b) << endl;
    }
    return 0;
}

