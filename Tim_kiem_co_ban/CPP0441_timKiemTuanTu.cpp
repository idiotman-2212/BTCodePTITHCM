#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t, n, y, x, ans;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        bool check = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> y;
            if(!check && y == x)
            {
                ans = i;
                check = 1;
            }
        }
        if(check) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}

