#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a,long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    cin >> t;
    
    vector<int> a(t);
    vector<int> b(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> a[i] >> b[i];
    }
    
    for (int i = 0; i < t; ++i) {
        long long gcdValue = gcd(a[i], b[i]);
        long long lcmValue = lcm(a[i], b[i]);
        
        cout << lcmValue << " " << gcdValue << endl;
    }
    
    return 0;
}

