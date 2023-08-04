
#include<bits/stdc++.h>

using namespace std;

string de101 = "ABBADCCABDCCABD", de102 = "ACCABCDDBBCDDBB";

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        char s;
        int n;
        cin >> n;
        int cnt = 0;
        if(n == 101)
        {
          for(int i = 0; i <=14; i++)
            {
                cin >> s;
                if(s == de101[i]) ++cnt;
            }
        }
        else
        {
           for(int i = 0; i <=14; i++)
            {
                cin >> s;
                if(s == de102[i]) ++cnt;
            }
        }
        cout << setprecision(2) << fixed << 10.0 / 15 * cnt << endl;
    }
    return 0;
}

