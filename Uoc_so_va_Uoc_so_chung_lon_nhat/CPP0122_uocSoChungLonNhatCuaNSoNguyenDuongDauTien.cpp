#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if(b == 0){
		return a;
	}
	return gcd(b, a%b);
}
long long lcm(long long a, long long b){
	return (a*b)/gcd(a,b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long tmp = 1;
		for(long long i = 1; i <= n; i++){
			tmp = lcm(tmp, i);
		}
		cout << tmp << endl;
	}
	return 0;
}
