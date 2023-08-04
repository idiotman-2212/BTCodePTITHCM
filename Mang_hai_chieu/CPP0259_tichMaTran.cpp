#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int A[50][50], B[50][50], C[50][50] = {0};

    // Ð?c ma tr?n A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    // Ð?c ma tr?n B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    // Tính tích hai ma tr?n A và B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // In ma tr?n tích C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

