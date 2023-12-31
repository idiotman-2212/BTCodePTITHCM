#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string mnv, name, sex, bd, add, mst, date, d, m, y;
};

int cnt = 0;

void nhap(NhanVien &a)
{
    ++cnt;
    cin.ignore();
    if(cnt < 10) a.mnv = "0000" + to_string(cnt);
    else a.mnv = "000" + to_string(cnt);
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.bd);
    stringstream ss(a.bd);
    getline(ss, a.m, '/');
    getline(ss, a.d, '/');
    getline(ss, a.y, '/');
    getline(cin, a.add);
    getline(cin, a.mst);
    cin >> a.date;
}

bool cmp(NhanVien &a, NhanVien &b)
{
    if(a.y > b.y) return 0;
    if(a.y < b.y) return 1;
    if(a.m > b.m) return 0;
    if(a.m < b.m) return 1;
    if(a.d > b.d) return 0;
    return 1;
}

void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n)
{
    for(int i = 0; i < n; i++) cout << a[i].mnv << ' ' << a[i].name << ' ' << a[i].sex << ' ' << a[i].bd << ' ' << a[i].add << ' ' << a[i].mst << ' ' << a[i].date << endl;
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

//3
//Nguyen Van A
//Nam
//10/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//Nu
//10/15/1988
//Mo Lao-Ha Dong-Ha Noi
//8333012346
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011
