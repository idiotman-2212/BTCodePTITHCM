#include<bits/stdc++.h>

using namespace std;

long long  gcd(long long  a, long long  b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

class PhanSo
{
    private:
        long long  tu, mau;
    public:
    PhanSo (long long , long long )
    {
        this -> tu;
        this -> mau;
    }
    friend istream &operator >> (istream &is, PhanSo &a)
    {
        cin >> a.tu >> a.mau;
        return is;
    }
    void rutgon()
    {
        long long  GCD = gcd(tu, mau);
        tu /= GCD;
        mau /= GCD;
    }
    friend ostream &operator << (ostream &os, PhanSo &a)
    {
        os << a.tu << '/' << a.mau;
        return os;
    }
};

int main(){
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
