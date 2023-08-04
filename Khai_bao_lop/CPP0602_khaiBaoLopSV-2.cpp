#include<bits/stdc++.h>

using namespace std;

class SinhVien
{
    private:
    string msv, ten, lop, bd;
    float GPA;
    public:
    SinhVien()
    {
        this -> msv = "B20DCCN001";
        this -> ten = "";
        this -> lop = "";
        this -> bd = "";
        this -> GPA = 0;
    }
    friend istream &operator >> (istream &is, SinhVien &a)
    {
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.bd);
        is >> a.GPA;
        if(a.bd[2] != '/') a.bd.insert(a.bd.begin(), '0');
        if(a.bd[5] != '/') a.bd.insert(a.bd.begin() + 3, '0');
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien &a)
    {
        os << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.bd << ' ' << setprecision(2) << fixed << a.GPA;
        return os;
    }
};

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
