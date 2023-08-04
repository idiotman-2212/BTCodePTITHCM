#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

class SinhVien
{
    public:
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
        scanf("\n");
        if(cnt < 10) a.msv += "0" + to_string(cnt);
        else a.msv += to_string(cnt);
        string s;
        getline(is, s);
        stringstream ss(s);
        while(ss >> s)
        {
            s[0] = toupper(s[0]);
            for(int i = 1; i <= s.length(); i++) s[i] = tolower(s[i]);
            a.name += s;
            a.name += ' ';
        }
        a.name.erase(a.name.end() - 1);
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

bool cmp(SinhVien &a, SinhVien &b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
