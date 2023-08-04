#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> inputs(t);
    for (int i = 0; i < t; ++i) {
        cin >> inputs[i];
    }

    for (int i = 0; i < inputs.size(); i++) {
        int num = inputs[i];
        for (int j = 2; j <= sqrt(num); ++j) {
            int cnt = 0;
            while (num % j == 0) {
                ++cnt;
                num /= j;
            }
            if (cnt) {
                cout << j << ' ' << cnt << ' ';
            }
        }
        if (num > 1) {
            cout << num << ' ' << 1 << ' ';
        }
        cout << endl;
    }

    return 0;
}


