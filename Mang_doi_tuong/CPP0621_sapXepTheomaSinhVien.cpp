#include <bits/stdc++.h>
using namespace std;
struct sv{
	string msv, name, lop, email;
};
bool cmp(sv &a, sv &b){
	return a.msv < b.msv;
}
void nhap(sv ds[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, ds[i].msv);
		getline(cin, ds[i].name);
		getline(cin, ds[i].lop);
		getline(cin, ds[i].email);
	}
}
void sapxep(sv ds[], int n){
	sort(ds, ds+n, cmp);
}
void inds(sv ds[], int n){
	for(int i = 0; i < n; i++){
		cout << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].lop << ' ' << ds[i].email << endl;
	}
}
int main()
{
   int n;
   cin >> n;
   struct sv ds[50];
   nhap(ds,n);
   sapxep(ds,n);
   inds(ds,n);
   return 0;
}

//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT03-B
//sv4@stu.ptit.edu.vn
