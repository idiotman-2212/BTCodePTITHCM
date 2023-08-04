#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin >> t;
	cin.ignore();
	string s;
	set<string> st;//luu cac chuoi duy nhat
	while(t--){
		getline(cin,s);
		st.insert(s);
	}
	cout << st.size();
	return 0;
}
