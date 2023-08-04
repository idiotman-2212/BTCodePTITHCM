#include <iostream>
using namespace std;

int main() {
        int n;
        cin >> n;
        int A[n][3];
int count = 0;
int count2 = 0;
        // Ğ?c ma tr?n A
        for (int i = 0; i < n; i++) {
        	count = 0;
            for (int j = 0; j < 3; j++) {
            	
                cin >> A[i][j]; 
				if(A[i][j] == 1) count++;
            }
            if(count > 1) count2++;
        
        }
        cout << count2 << endl;


    return 0;
}

