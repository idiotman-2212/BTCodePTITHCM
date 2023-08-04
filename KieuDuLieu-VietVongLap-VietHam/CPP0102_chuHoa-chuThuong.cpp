#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;  
    cin >> t;

    vector<char> inputs(t);  

    for (int i = 0; i < t; i++) {
        cin >> inputs[i];  
    }

    vector<char> results(t);  

    for (int i = 0; i < t; i++) {
        char ch = inputs[i];  

        
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';  
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a'; 
        }

        results[i] = ch;  
    }

    for (int i = 0; i < t; i++) {
        cout << results[i] << endl;  
    }

    return 0;
}

