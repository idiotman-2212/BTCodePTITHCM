#include<bits/stdc++.h>

using namespace std;
int F[20];
bool check[1005] = {};
int a[105];

void Pre()
{
    F[0] = 0;
    F[1] = 1;
    check[0] = check[1] = 1;
    for(int i = 2; i<= 16; i++)
    {
        F[i] = F[i-1] + F[i-2];
        check[F[i]] = 1;
    }
}
int main()
{
    Pre();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i = 1; i<= n; i++) cin >> a[i];
        for(int i = 1; i<= n; i++) if(check[a[i]]) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}
