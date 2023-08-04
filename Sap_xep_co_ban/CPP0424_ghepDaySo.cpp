#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	 cin >> t;
	 while(t--){
	 	int a, b;
	 	cin >> a >> b;
	 	int n = a*b;
	 	int arr[n];
	 	for(int i = 0; i < n; i++){
	 		cin >> arr[i];
	 	}
	 	sort(arr, arr+n);
	 	for(int i = 0; i < n; i++){
	 		cout << arr[i] << ' ';
	 	}
	 	cout << endl;
	 }	
	 return 0;
}
