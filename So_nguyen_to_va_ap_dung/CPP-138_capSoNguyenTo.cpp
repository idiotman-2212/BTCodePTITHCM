#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	if(n <=1){
		return false;
	}for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		for(int i = 2; i <= n; i++){
			if(check(i) && check(n-i)){
				cout << i << " " << n-i << endl;
				break;
			}
		}
	}
	return 0;
}
