#include<bits/stdc++.h>

using namespace std;
bool check(string &s, int &k)
{
    if(s.length() < 26) return 0;
    int dd[30] = {};
    for(int i = 0; i < s.length(); ++i) dd[s[i] - 'a']++;
    int cnt = 0;
   for(int i = 0; i < 25; i++) if(!dd[i]) cnt++;
    return cnt <= k;
}

int main()
{
    int t, k;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        cin >> k;
        cout << check(s, k) << endl;
    }
    return 0;
}
