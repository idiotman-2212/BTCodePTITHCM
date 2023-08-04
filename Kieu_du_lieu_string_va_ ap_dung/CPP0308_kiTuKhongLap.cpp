#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--)
    {
        int dd[130] = {};
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
        	++dd[s[i]];
        }
        for(int i = 0; i < s.length(); i++){
        	if(dd[s[i]] == 1){
        		cout << s[i];
        	}
        }
        cout << endl;
    }
    return 0;
}
