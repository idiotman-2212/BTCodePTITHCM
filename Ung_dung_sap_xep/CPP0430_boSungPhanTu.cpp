#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100005];
		int dd[100005] = {};
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			dd[a[i]]++;
		}
		sort(a+ 1,a + 1 + n);
		int cnt = 0;
		for(int i = a[1]; i <= a[n]; i++) if(!dd[i]) cnt++;
		cout << cnt << endl;
	}
}
