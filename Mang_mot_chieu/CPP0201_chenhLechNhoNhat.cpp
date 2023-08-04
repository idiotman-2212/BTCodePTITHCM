#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        int min_diff = INT_MAX;
        for (int i = 0; i < N - 1; i++) {
            int diff = A[i + 1] - A[i];
            min_diff = min(min_diff, diff);
        }

        cout << min_diff << endl;
    }

    return 0;
}

