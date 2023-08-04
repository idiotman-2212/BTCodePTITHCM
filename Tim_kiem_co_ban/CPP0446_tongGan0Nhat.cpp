#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int i = 1; i<= n; i++) cin >> a[i];
        int ans = - INT_MAX;
        for(int i = 1; i<= n; i++)
		for(int j = i+1; j<= n; j++) 
		if(abs(ans) > abs(a[i] + a[j])) //kiem tra xem tong cua cap phan tu hien tai cos nho hon gia tri cua ans khong
		ans = a[i] + a[j];
        cout << ans << endl;
    }
    return 0;
}
