#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int countPrimeInRange(int L, int R){
	int count = 0;
	for(int i = L; i <= R; i++){
		if(isPrime(i)){
			count++;
		}
	}
	return count;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int L, R;
		cin >> L >> R;
		int result = countPrimeInRange(L, R);
		cout << result << endl;
	}
	return 0;
}
