#include<bits/stdc++.h>

using namespace std;

int a[1000005], b[1000005];

int main()
{
    faster();
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 1; i<= n; i++) cin >> a[i];
        for(int i = 1; i<= m; i++) cin >> b[i];
        sort(a + 1, a + 1 + n);
        sort(b + 1, b + 1 + m);
        cout << (long long) a[n] * b[1] << endl;
    }
    return 0;
}
