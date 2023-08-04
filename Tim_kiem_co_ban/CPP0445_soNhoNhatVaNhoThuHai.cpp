#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n; cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		int nho1 = INT_MAX;
		int nho2 = INT_MAX;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int  i = 0; i < n; i++){
			if(a[i] < nho1){
				nho2 = nho1;
				nho1 = a[i];
			}else if(a[i] < nho2 && a[i] != nho1){
				nho2 = a[i];
			}
		}
		if(nho2 == INT_MAX){
			cout << -1 << endl;
		}else{
			cout << nho1 << " " << nho2 << endl;
		}
		
	}
	return 0;
}
