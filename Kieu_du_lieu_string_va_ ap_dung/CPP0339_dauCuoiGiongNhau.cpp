#include <iostream>
using namespace std;

int dem(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string s;
        getline(cin, s);
        int result = dem(s);
        cout << result << endl;
    }
    return 0;
}

