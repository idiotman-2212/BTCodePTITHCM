#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	if(n == 1){
		return false;
	}for(int i = 2; i<= sqrt(n); i++){
		if(n%i== 0)
		return false;
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	for(int i = 2; i <= sqrt(n); i++){
		int dem = 0;
		while(n%i==0){
			dem++;
			n/= i;
		}
		if(dem) cout << i << " " << dem << endl;	
	}
	if(n>1) cout << n << " " << 1;
	return 0;
}
