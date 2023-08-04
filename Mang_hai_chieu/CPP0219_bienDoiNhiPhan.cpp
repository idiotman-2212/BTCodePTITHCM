#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        int A[100][100], B[100][100] = {0};

        // Ðoc ma tran A
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }

        // Thay doi các phan tu cua ma tran B theo yêu cau
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (A[i][j] == 1) {//neu gap phan tu la 1 tai vi tri (i,j)
                    for (int k = 0; k < N; k++) {
                        B[k][j] = 1;//cap nhat gia tri cua cac phan tu trong hang i và cot j cua ma tran B thanh 1
                    }
                    for (int k = 0; k < M; k++) {
                        B[i][k] = 1;
                    }
                }
            }
        }

        // In ra ma tran B sau khi thay doi
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << B[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}

