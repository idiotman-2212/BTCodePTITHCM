#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		int count = 0;
		for(int  i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			if(x == a[i]){
				count++;
			}
		}
		if(count > 0){
			cout << count << endl;
		}else{
			cout << -1 << endl;
		}
	}
	return 0;
}
