#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n];
        for(int i = 1; i<= n; i++) cin >> a[i];
        sort(a + 1, a + 1 + n);
        for(int i = n; k--; --i) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}

