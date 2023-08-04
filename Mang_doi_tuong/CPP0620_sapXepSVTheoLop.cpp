#include<bits/stdc++.h>
using namespace std;
struct sv
{
    string msv, name, lop, email;
};

bool cmp(sv &a, sv &b)
{
    if(a.lop > b.lop) return 0;
    if(a.lop < b.lop) return 1;
    if(a.msv > b.msv) return 0;
    return 1;
}

int main()
{
    int n;
    cin >> n;
    sv a[n];
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << endl;
    return 0;
}
