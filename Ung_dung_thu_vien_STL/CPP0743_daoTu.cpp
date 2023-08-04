#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ð?c kí t? '\n' sau dòng ch?a s? lu?ng b? test

    while (t--) {
        string s;
        getline(cin, s); // Ð?c xâu ký t? S

        // Tách xâu S thành các t? riêng bi?t và luu vào vector
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        // In ra các t? trong vector theo th? t? ngu?c l?i
        for (int i = words.size() - 1; i >= 0; i--) {
            cout << words[i];
            if (i != 0) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

