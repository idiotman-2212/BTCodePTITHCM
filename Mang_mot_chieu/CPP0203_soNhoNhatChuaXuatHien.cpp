#include <bits/stdc++.h> 
#include <algorithm> 
using namespace std; 
int main(){ 
int t; cin >>t; 
while (t--){ 
int n; cin >> n; 
int arr[n]; 
for (int i =0;i<n;i++){ 
cin >> arr[i]; } 
sort(arr,arr+n); //sap xep theo tang dan 
int res =1; 
for (int i =0; i<n;i++){ 
if(arr[i]>0){ 
if ( arr[i] <= res){ // neu so res da xuat hien trong mang thi se cap nhat res
res = arr[i] +1; // bang so duong nho hon no, dam bao rang res khong xuat hien trong mang
} 
else break; } } //nguoc lai, thoat khoi vong lap de dam bao res la so nguyen duong nho nhat ko xuat hien trong mang
cout << res << endl; } 
return 0;}
