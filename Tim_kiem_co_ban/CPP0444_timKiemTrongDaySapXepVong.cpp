#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n; 
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		int x;
		cin >> x;
		int ans = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++){
			if(a[i] == x){
				ans = i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
