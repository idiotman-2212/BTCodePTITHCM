#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i <= sqrt(n) ; i ++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	if(isPrime(n)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}

