#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(const string& s) {
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch != '0' && ch != '6' && ch != '8') {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    vector<string> inputs(t);
    for (int i = 0; i < t; i++) {
        cin >> inputs[i];
    }

    vector<string> results(t);
    for (int i = 0; i < t; i++) {
        if (check(inputs[i])) {
            results[i] = "YES";
        } else {
            results[i] = "NO";
        }
    }

    for (int i = 0; i < results.size(); i++) {
    cout << results[i] << endl;
}

    return 0;
}

