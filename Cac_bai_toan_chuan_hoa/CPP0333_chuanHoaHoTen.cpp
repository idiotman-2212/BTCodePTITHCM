#include<bits/stdc++.h> 
using namespace std; 
string chuanhoa(string s){ 
if(s[0]<='z'&&s[0]>='a'){ 
s[0]-=32; 
} 
for(int i=1;i<s.size();i++){ 
if(s[i]>='A'&&s[i]<='Z'){ 
s[i]+=32; 
} 
} 
return s; 
} 
string viethoa(string s){ 
for(int i=0;i<s.size();i++){ 
if(s[i]>='a'&&s[i]<='z') 
s[i]-=32; 
} 
return s; 
} 
int main(){ 
string s; 
getline(cin,s); 
string s1; 
string s2; 
stringstream ss(s); 
stringstream the(s); 
while(ss>>s1){ } 
while(the>>s2){ 
int check=0; 
if(s2!=s1){ 
cout<<" "<<chuanhoa(s2); 
check=1; 
} 
} 
cout<<", "<<viethoa(s1); 
}
