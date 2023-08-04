#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	if(n <= 1){
		return false;
	}for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
long long gcd(long long a, long long b){
	if(b == 0){
		return a;
	}
	return gcd(b, a% b);
}
long long lcm(long long a, long long b){
	return (a*b) / gcd(a,b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long kt = 0;
		for(long long i = 2; i <= sqrt(n); i++){
			while(n%i ==0 ){
				kt=i;
				n/=i;
			}
			
		}
		if(n > 1) kt = n;
		cout << kt << endl; 
	}
	return 0;
}
