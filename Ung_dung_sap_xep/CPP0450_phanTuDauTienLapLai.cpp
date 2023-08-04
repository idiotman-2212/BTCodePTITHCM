#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int x = -1;
		bool check = false;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		// Khoi tao mang dánh dau voi giá tri ban dau là 0
		int dd[100000] = {0};
		for(int i = 0; i < n; i++){
			// Neu phan tu a[i] dã xuat hien truoc dó, gán x và dung vòng lap
			if(dd[a[i]] > 0){
				x = a[i];
				check = true;
				break;
			}
			 // Ðánh dau phan tu a[i] dã xuat hien
			dd[a[i]]++;
		}
		if(check){
			cout << x << endl;
		}else{
			cout << -1 << endl;
		}
	}
	return 0;
}
