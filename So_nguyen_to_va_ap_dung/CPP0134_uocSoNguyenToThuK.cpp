#include <bits/stdc++.h>
using namespace std;


int main() {

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> v;
        for (int i = 2; i * i <= n; ++i) {
            while (n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
        if (n > 1) v.push_back(n);
        if(k > v.size()) cout << -1 << endl;
        else cout << v[k-1] << endl;
    }
    return 0;
}

