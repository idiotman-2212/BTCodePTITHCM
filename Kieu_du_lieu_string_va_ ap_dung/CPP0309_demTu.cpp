#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int count = 0;
		bool isWord = false;
		for(int i = 0; i < s.length(); i++){
			char c = s[i];
			if(c != ' ' && c != '\t' && c != '\n'){
				if(!isWord){
					count++;
					isWord = true;
					}
				}else{
					isWord = false;
			}
		}
		cout << count << endl;
	}
	return 0;
}
