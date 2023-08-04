#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, l, r;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n];
        for(int i = 1; i <= n; i++) cin >> a[i];
        while(k--)
        {
            long long sum = 0;
            cin >> l >> r;
            for(int i= l; i<= r; i++) sum += a[i];
            cout << sum << endl;
        }
    }
    return 0;
}
