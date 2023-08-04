#include<bits/stdc++.h>
using namespace std;
bool check(string &s)
{
    int len = s.length() / 2;
    for(int i = 0; i <= len; i++){	
	 if(s[i] != s[s.length() - i - 1])
	  return 0;
	}
    return 1;
}

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
