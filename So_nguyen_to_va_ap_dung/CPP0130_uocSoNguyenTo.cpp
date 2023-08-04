#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<long long> inputs(t);
    for (int i = 0; i < t; ++i) {
        cin >> inputs[i];
    }
    
    for (int i = 0; i < t; ++i) {
        long long n = inputs[i];
        
        for (int j = 2; j <= sqrt(n); ++j) {
            while (n % j == 0) {
                cout << j << ' ';
                n /= j;
            }
        }
        
        if (n > 1) cout << n << ' ';
        cout << endl;
    }
    
    return 0;
}

