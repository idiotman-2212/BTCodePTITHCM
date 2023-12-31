#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

class SinhVien
{
    private:
    string msv, name, lop, bd;
    float gpa;
    public:
    SinhVien()
    {
        this -> msv = "B20DCCN0";
        this -> name = "";
        this -> lop = "";
        this -> gpa = 0;
        this -> bd = "";
    }
    friend istream &operator >> (istream &is, SinhVien &a)
    {
        ++cnt;
        is.ignore();
        if(cnt < 10) a.msv += "0" + to_string(cnt);
        else a.msv += to_string(cnt);
        getline(is, a.name);
        getline(is, a.lop);
        getline(is, a.bd);
        if(a.bd[2] != '/') a.bd = "0" + a.bd;
        if(a.bd[5] != '/') a.bd.insert(a.bd.begin() + 3, '0');
        is >> a.gpa;
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien &a)
    {
        cout << a.msv << ' ' << a.name << ' ' << a.lop << ' ' << a.bd << ' ' << setprecision(2) << fixed << a.gpa << endl;
        return os;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}



