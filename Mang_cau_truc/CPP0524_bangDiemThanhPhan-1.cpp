#include<bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string msv, ten, lop;
    double d1, d2, d3;
};
void nhap(SinhVien &ds){
		cin.ignore();
		getline(cin, ds.msv);
		getline(cin, ds.ten);
		getline(cin, ds.lop);
		cin >> ds.d1 >> ds.d2 >> ds.d3;
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.msv < b.msv;
}
void sap_xep(SinhVien ds[], int n){
	sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n){
	for(int i = 0; i < n ; i++){
		cout << i+1 << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " "
		<< setprecision(1) << fixed << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
//
//3
//B20DCCN999
//Nguyen Van An
//D20CQCN04-B
//10.0
//9.0
//8.0
//B20DCAT001
//Le Van Nam
//D20CQAT02-B
//6.0
//6.0
//4.0
//B20DCCN111
//Tran Hoa Binh
//D20CQCN04-B
//9.0
//5.0
//6.0
