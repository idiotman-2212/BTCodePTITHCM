#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
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

void in(PhanSo &p)
{
    cout << p.tu << '/' << p.mau;
}

int main() {
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}

