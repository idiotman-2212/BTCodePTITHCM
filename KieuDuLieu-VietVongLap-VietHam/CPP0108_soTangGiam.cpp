#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;
bool isPrime(int n){
	if(n <= 1){
		return false;
	}for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}
bool isIncreaseOrDecrease(int n){
	string str = to_string(n);
	bool increase = true;
	bool decrease = true;
	for(int i = 1; i < str.size(); i++){
		if(str[i] < str[i-1]) increase = false;
		if(str[i] > str[i-1]) decrease = false;
	}
	return increase || decrease;
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n; cin >> n;
		int count = 0;
		for(int i = 10; i < 1000000000; i++){
			if(to_string(i).size() == n && isIncreaseOrDecrease(i)) count++;
		}
		cout << count << endl;
	}
	return 0;
}
