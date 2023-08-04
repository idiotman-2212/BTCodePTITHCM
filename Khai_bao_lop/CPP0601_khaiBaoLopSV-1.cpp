#include<bits/stdc++.h>

using namespace std;

class SinhVien
{
    public:
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
    void nhap()
    {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, bd);
        cin >> GPA;
        if(bd[2] != '/') bd.insert(bd.begin(), '0');
        if(bd[5] != '/') bd.insert(bd.begin() + 3, '0');
    }
    void xuat()
    {
        cout << msv << ' ' << ten << ' ' << lop << ' ' << bd << ' ' << setprecision(2) << fixed << GPA;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
