#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;  cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		
		int min_diff = INT_MAX;
		for(int i = 0; i < n-1; i++){
			int diff = a[i+1] - a[i];
			min_diff = min(min_diff, diff);
		}
		cout << min_diff << endl;
	}
	
	return 0;
}
