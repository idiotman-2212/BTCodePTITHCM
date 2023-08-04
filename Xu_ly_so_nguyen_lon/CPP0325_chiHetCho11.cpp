#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	int tmp = 0;
	for(int i = 0; i < s.length(); i++){
		char c = s[i];
		tmp = (tmp * 10 + (c - '0'))%11;	
	}
	return tmp == 0;
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
}
