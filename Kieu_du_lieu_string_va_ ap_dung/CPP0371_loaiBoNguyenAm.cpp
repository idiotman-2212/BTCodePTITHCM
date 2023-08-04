#include <bits/stdc++.h>
using namespace std;

int kt(char c)
{
    char temp=tolower(c);
    if(temp=='u'||temp=='e'||temp=='o'||temp=='a'||temp=='i'||temp=='y') {
    	return 1;
    }
    return 0;
}

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(kt(s[i])) continue;
        cout << '.' << (char) tolower(s[i]);
    }
	return 0;
}
