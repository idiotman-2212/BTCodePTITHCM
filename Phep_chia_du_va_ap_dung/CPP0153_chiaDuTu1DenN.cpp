#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans, a, b;
        a = k - 1;
        b = n % k;
        if (!k)
            ans = 0;
        else
            ans = a * (a + 1) / 2 * (n / k) + b * (b + 1) / 2;
        cout << ans << endl;
    }
    return 0;
}

