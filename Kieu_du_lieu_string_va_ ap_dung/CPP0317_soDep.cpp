#include <bits/stdc++.h>
using namespace std;
bool isThuanNghich(string &s){
	int len = s.length() / 2;
    for(int i = 0; i < len; i++){
    	if(s[i] != s[s.length() - i - 1]){
    		return 0;
    	}
    }
    return 1;
}
bool isChan(string &s){
	for(int i = 0; i < s.length(); i++){
		 if(s[i] & 1){//kiem tra s[i] va bit cuoi cung cua gia tri ki tu
		 	 return 0;//bit cuoi cua so chan luon la 0
		 }
	}
    return 1;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	string s;
	while(t--){
		getline(cin,s);
		if(isThuanNghich(s)==true && isChan(s) == true){
			cout << "YES" << endl;
		}else{
			cout << "NO"  << endl;
		}
	}
	return 0;
}
