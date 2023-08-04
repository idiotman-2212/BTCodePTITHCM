#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + 1 + n); //sap xep tu a[1] den a[n]
        cout << a[n] << endl; // in phan tu cuoi
    }
    return 0;
}
