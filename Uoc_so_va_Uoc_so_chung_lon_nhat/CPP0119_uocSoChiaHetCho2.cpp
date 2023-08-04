#include <bits/stdc++.h>
using namespace std;
int count(int n){
	int cnt = 0;
	while(n%2 == 0){
		cnt++;
		n/=2;
	}
	return cnt;
}
int main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int res = count(n);
		cout << res << endl;
	}
	return 0;
}
