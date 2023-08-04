#include<bits/stdc++.h>

using namespace std;

 long long gcd( long long a,  long long b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

struct PhanSo
{
     long long tu, mau;
};

void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p)
{
     long long UCLN = gcd(p.tu, p.mau);
    p.tu /= UCLN;
    p.mau /= UCLN;
}

PhanSo tong(PhanSo &p, PhanSo &q)
{
     long long BCNN = p.mau * q.mau / gcd(p.mau, q.mau);
    PhanSo ans;
    ans.mau = BCNN;
    ans.tu = (BCNN / p.mau) * p.tu + (BCNN / q.mau) * q.tu;
    rutgon(ans);
    return ans;
}

void in(PhanSo &p)
{
    cout << p.tu << '/' << p.mau;
}

int main() {
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}

