#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        map<long long, bool> mp;
        for(long long i = 0; i < n; i++){
        	long long x;
        	cin >> x;
        	mp[x] = true;
        }
        for(int i = 0; i < n; i++){
        	if(mp[i]){
        		cout << i << " ";
        	}else cout << -1 << " ";
        }
        cout << endl;
    }

    return 0;
}


