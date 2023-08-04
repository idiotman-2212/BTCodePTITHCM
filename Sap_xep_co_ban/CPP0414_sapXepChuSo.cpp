#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    long long k;
    cin >> t;
    while (t--) {
        cin >> n;
        set<int> s;
        while (n--) {
            cin >> k;
            while (k) {
                s.insert(k % 10);
                k /= 10;
            }
        }
         for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
            int digit = *it; 
            cout << digit << ' '; 
        }
        cout << endl;
    }
    return 0;
}

