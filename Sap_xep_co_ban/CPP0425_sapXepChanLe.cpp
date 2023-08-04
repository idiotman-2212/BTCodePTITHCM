#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	 cin >> t;
	 while(t--){
	 	int n;
	 	cin >> n;
	 	vector<int> a(n);
	 	vector<int> b(n);
	 	for(int i = 0; i < n; i++){
	 		cin >> a[i];
	 	}
	 	sort(a.begin(), a.end());
	 	int index = 0;
	 	for(int i = 0; i < n; i+=2){
	 		b[i] = a[index++];
	 	}
	 	for(int i = 1; i < n; i+=2){
	 		b[i] = a[index++];
	 	}
	 	for(int i = 0; i < b.size(); i++){
	 		cout << b[i] << " ";
	 	}
	 	cout << endl;
	 }
	 return 0;
}
