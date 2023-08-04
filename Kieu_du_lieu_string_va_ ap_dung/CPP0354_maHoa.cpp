#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int count = 1;
        for(int i = 0; i < s.length(); i++)
        {
            if(i < s.length() - 1 && s[i] == s[i + 1]) ++count;// tang bien dem neu ki tu tiep theo giong voi ki tu hien tai
            else
            {
                cout << s[i] << count;//in ra ki tu va so luong da dem duoc
                count = 1;//dat bien dem ve 1 de dem so luong ki tu moi
            }
        }
        cout << endl;
    }
    return 0;
}
