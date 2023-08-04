#include<bits/stdc++.h>

using namespace std;

struct Time
{
    int h, m, s;
};

bool cmp(Time a, Time b)
{
    if(a.h < b.h) return 1;
    else if(a.h > b.h) return 0;
    if(a.m < b.m) return 1;
    else if(a.m > b.m) return 0;
    if(a.s < b.s) return 1;
    else if(a.s > b.s) return 0;
    return 1;
}

int main()
{
    int n;
    cin >> n;
    Time a[n];
    for(int i = 0; i < n; i++) cin >> a[i].h >> a[i].m >> a[i].s;
    sort(a, a + n, cmp);
   for(int i = 0; i < n; i++) cout << a[i].h << ' ' << a[i].m << ' ' << a[i].s << endl;
    return 0;
}
