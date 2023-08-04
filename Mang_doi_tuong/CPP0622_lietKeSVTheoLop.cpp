#include <bits/stdc++.h>
using namespace std;
class sv{
	private: 
	string masv, ten, lop, email;
	public:
		sv(){
			this -> masv = masv;
			this -> ten = ten;
			this -> lop = lop;
			this -> email = email;
		}
		friend istream &operator >> (istream &is , sv &a){
			is.ignore();
			getline(is, a.masv);
			getline(is, a.ten);
			getline(is, a.lop);
			getline(is, a.email);
			return is;
		}
		friend ostream &operator >> (ostream &os, sv &a){
			cout << a.masv << " " << a.ten << " " << a.lop << " " << a.email << " " << endl;
			return os;
		} 
		
};
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << " :" << endl;
		for(int i = 0; i < n; i++){
			
		}
	}
}
