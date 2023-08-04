#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int a[1000005];

int main()
{
    int t, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + 1 + n);
        if(binary_search(a+1, a+1+n,x)) 
		cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}

