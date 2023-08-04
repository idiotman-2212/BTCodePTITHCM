#include <bits/stdc++.h>
using namespace std;
void dao(char a[], int n)
{
     int i;
     for(i = 0; i <= (n - 1)/2; i++)
     {
	     char temp = 0;
	     temp = a[i];
	     a[i] = a[n - i - 1];
	     a[n - i - 1] = temp;
     }
}
void t_tong(char a[],char b[], char tong[])            
{                                                             
	 int i,k;                                                      
     char ttong[1000];                                         
     for(i = 0; i < 1000; i++)                                 
	     ttong[i] = 0;                                           
                                                              
     int nho = 0;                                             
    if(strlen(a) >= strlen(b)) k = strlen(a);
	 	else k = strlen(b);
		                                                                
     for(i = 0; i < k; i++)
     {
	     ttong[i] = ((a[i] - 48) + (b[i] - 48) + nho)%10 + 48;
	     nho = ((a[i] - 48) + (b[i] - 48) + nho)/10;                         
     }                                                            
                                                              
     if(nho > 0) ttong[strlen(a)] = nho + 48;           
	                                                                                                 
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	string a,b;
	while(t--){
		cin >> a >> b;
		string res = truXau(a,b);
		cout << res << endl;	
	}
	return 0;	
}

