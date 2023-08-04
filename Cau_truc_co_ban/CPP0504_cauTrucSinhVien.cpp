#include<bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string name, lop;
    string d, m, y;
    float GPA;
};

void nhap(SinhVien &A)
{
    getline(cin, A.name);
    getline(cin, A.lop);
    int a, b, c;
    scanf("%d/%d/%d", &a, &b, &c);
    if(a < 10) A.d = "0" + to_string(a);
    else A.d = to_string(a);
    if(b < 10) A.m = "0" + to_string(b);
    else A.m = to_string(b);
    A.y = to_string(c);
    cin >> A.GPA;
}

void in(SinhVien &A)
{
    cout << "B20DCCN001" << ' ' << A.name << ' ' << A.lop << ' ' << A.d << '/' << A.m << '/' << A.y << ' ' << setprecision(2) << fixed << A.GPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

