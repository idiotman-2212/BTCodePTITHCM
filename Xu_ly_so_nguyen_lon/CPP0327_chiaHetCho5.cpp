#include<bits/stdc++.h>

using namespace std;

bool check(string &s)
{
    int tmp = 0; 
    for(int i = 0; i < s.length(); i++){
    	tmp = (tmp * 10 + (s[i] - '0'))%5;
    }
    return tmp == 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(check(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
