#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[100][100];

        // Ð?c ma tr?n A
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        // In các ph?n t? theo hình con r?n
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    cout << A[i][j] << " ";
                }
            } else {
                for (int j = n - 1; j >= 0; j--) {
                    cout << A[i][j] << " ";
                }
            }
        }

        cout << endl;
    }
    return 0;
}

