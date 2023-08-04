#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long giaiThua[n + 1];
    giaiThua[1] = 1;
    long long sum = 1;
    for(int i = 2; i <= n; ++i)
    {
        giaiThua[i] = giaiThua[i - 1] * i;
        sum += giaiThua[i];
    }
    cout << sum;
    return 0;
}
