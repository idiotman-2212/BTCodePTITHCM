#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], i, j;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Ðem so luong phan tu <= k;
        int cntOk = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= k)
                cntOk++;
        }

        // Ðem so luong phan tu > k trong doan tu [0, cntOk - 1];
        int cntNotOk = 0;
        for (int i = 0; i < cntOk; i++)
        {
            if (a[i] > k)
                cntNotOk++;
        }

        int ans = cntNotOk;
        for (int i = 0, j = cntOk; j < n; i++, j++)
        {
            if (a[i] > k)
                cntNotOk--;
            if (a[j] > k)
                cntNotOk++;
            ans = min(ans, cntNotOk);
        }
        cout << ans << endl;
    }
    return 0;
}
