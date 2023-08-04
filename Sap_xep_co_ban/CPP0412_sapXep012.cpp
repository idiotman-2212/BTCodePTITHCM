#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}
