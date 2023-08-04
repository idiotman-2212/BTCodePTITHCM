#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i<= sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		bool kt = 1;
		for(int i = 2; i <= n; i++){
			if(check(i)&&check(n-i)){
				cout << i << " " << n-i << endl;
				kt = 0;
				break;
			}
		}
		if(kt) cout << -1 << endl;
	}
	return 0;
}
