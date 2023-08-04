#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(const string& s) {
    if (s.length() < 2)
        return false;
    int len = s.length() - 1;
    return (s[len - 1] == '8' && s[len] == '6');
}

int main() {
    int t;
    cin >> t;

    vector<string> inputs(t);
    for (int i = 0; i < t; ++i) {
        cin >> inputs[i];
    }

    for (int i = 0; i < inputs.size(); i++) {
    cout << check(inputs[i]) << endl;
}


    return 0;
}

