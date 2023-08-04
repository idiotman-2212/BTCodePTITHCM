#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin,s2);
	s1.replace(s1.find(s2), s2.length(), "");
	cout << s1;
	return 0;
}
