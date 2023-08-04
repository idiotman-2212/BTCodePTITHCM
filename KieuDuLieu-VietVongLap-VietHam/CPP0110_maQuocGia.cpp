
#include<bits/stdc++.h>

using namespace std;


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	string s;
    	cin >> s;
    	for(int i = 0; i < s.length()-2; i++){
    		if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4'){
    			s[i] = s[i+1] = s[i+2] = '\0';
    			break;
    		}
    	}
    	for(int i = 0; i < s.length(); i++){
    		if(s[i] != '\0')
    		cout << s[i];
    	}
    	cout << endl;
}
    return 0;
}

