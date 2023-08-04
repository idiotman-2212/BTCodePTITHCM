#include<bits/stdc++.h>
using namespace std;

int check(string &s) {
    if (s[0] == '0') return -1;
    int dd[15] = {};
    for (int x = 0; x < s.size(); x++) {
    	char i = s[x];
        if (!isdigit(i)) return -1;
        dd[i - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (!dd[i]) return 0;
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int result = check(s);
        if (result == -1) cout << "INVALID" << endl;
        else if (result == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

