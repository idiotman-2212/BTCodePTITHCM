#include<bits/stdc++.h> 
using namespace std; 
string chuyen(string s){ 
for(int i=0;i<s.size();i++){ 
if(s[i]>='A'&&s[i]<='Z') s[i]+=32; 
} return s; 
} 
int main(){ 
string s; 
getline(cin,s); 
chuyen(s); 
stringstream ss(chuyen(s)); 
string s1; 
stringstream the(chuyen(s)); 
while(ss>>s1){ } 
cout<<s1; 
string s2; 
while(the>>s2){ 
if(s2!=s1){ 
cout<<s2[0]; 
} 
} 
cout<<"@ptit.edu.vn"; 
}
