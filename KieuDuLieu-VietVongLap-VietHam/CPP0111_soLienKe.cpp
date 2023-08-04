#include<bits/stdc++.h>
using namespace std;

bool check(string &s)
{
    int len = s.length() - 2;
    for(int i = 0; i <= len; ++i){
        if(abs(s[i] - s[i + 1]) != 1) return false;	
    } 
    return true;
}

int main()
{
    int t;
    cin >> t;
    
    vector<string> results;
    while(t--)
    {
        string s;
        cin >> s;
        if(check(s)) results.push_back("YES");
        else results.push_back("NO");
    }
    
   
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }
    
    return 0;
}
