#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

struct NhanVien
{
    string name, sex, bd, add, msThue, date, ms;
    
};

void nhap(NhanVien &A)
{
    ++cnt;
    if(cnt == 1) cin.ignore();
    getline(cin, A.name);
    getline(cin, A.sex);
    getline(cin, A.bd);
    getline(cin, A.add);
    getline(cin, A.msThue);
    getline(cin, A.date);
    if(cnt < 10) A.ms = "0000" + to_string(cnt);
    else A.ms = "000" + to_string(cnt);
}

void inds(NhanVien ds[], int n)
{
    for(int i = 0; i < n; i ++) cout << ds[i].ms << ' ' << ds[i].name << ' ' << ds[i].sex << ' ' << ds[i].bd << ' ' << ds[i].add << ' ' << ds[i].msThue << ' ' << ds[i].date << endl;
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

