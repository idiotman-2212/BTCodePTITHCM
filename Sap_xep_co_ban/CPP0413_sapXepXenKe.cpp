#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        sort(A, A+n);

        int left = 0, right = n - 1;
        while (left <= right) {
            if (left == right) {
                cout << A[left];
            } else {
                cout << A[right] << " " << A[left] << " ";
            }
            left++;
            right--;
        }

        cout << endl;
    }

    return 0;
}

