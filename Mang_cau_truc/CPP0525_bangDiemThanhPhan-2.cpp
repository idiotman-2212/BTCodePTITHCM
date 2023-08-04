#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
struct SinhVien{
	string masv, ten, lop;
	float d1, d2, d3;
};
void nhap(SinhVien ds[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, ds[i].masv);
		getline(cin, ds[i].ten);
		getline(cin, ds[i].lop);	
		cin >> ds[i].d1 >> ds[i].d2 >> ds[i].d3;
	}
}
bool cmp(SinhVien a, SinhVien b){
	return a.ten < b.ten;
}
void sapxep(SinhVien ds[], int n){
	sort(ds, ds+n, cmp);
}
void inds(SinhVien ds[], int n){
	for(int i = 0; i< n; i++){
		cout << i+1 << " " << ds[i].masv << " " << ds[i].ten << " " << ds[i].lop <<
		" " << setprecision(1) << fixed << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 <<endl;
	}
}
int main(){
	int n;
	cin >> n;
	struct SinhVien ds[50];
	nhap(ds, n);
	sapxep(ds, n);
	inds(ds,n);
	return 0;
}

//3
//B20DCCN999
//Nguyen Van Nam
//D20CQCN04-B
//10.0
//9.0
//8.0
//B20DCAT001
//Le Van An
//D20CQAT02-B
//6.0
//6.0
//4.0
//B20DCCN111
//Nguyen Van Binh
//D20CQCN01-B
//9.0
//5.0
//6.0
